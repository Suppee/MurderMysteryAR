using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using Vuforia;

public class GameManager : MonoBehaviour {
    public static GameManager Instance = null;
    private GameObject Trigger;
    private TMP_Text gpsLocationText;
    private DefaultObserverEventHandler doeh;
    private GameObject interaction;
    private GameObject spawn;
    private Slider timeSlider;
    private TMP_Text timeText;
    [Range(0, 360)] 
    [SerializeField] private float timeSliderMax = 360;
    public float Time => timeSlider.value;
    [SerializeField] float increment = 5; // Increment = 5: 30 mins = 360. Increment = 10: 30 mins = 180.

    private void Awake() {
        if(Instance == null) {
            Instance = this;
            DontDestroyOnLoad(this);
        } else if(Instance != this) {
            Destroy(this);
        }
    }

    /* private void Start() {
        SetGameState(GameState.GPS);
    } */
    
    private void GPSScene() {
        Trigger = GameObject.Find("Trigger");
        gpsLocationText = GameObject.Find("GPSLocationText").GetComponent<TMP_Text>();
        GameObject.Find("Button").GetComponent<Button>().onClick.AddListener (delegate {ChangeToARScene();});
        SetTriggerState(false);
        doeh = null;
        interaction = null;
        spawn = null;
        timeText = null;
        timeSlider = null;
    }

    private void ARScene() {
        Trigger = null;
        gpsLocationText = null;
        doeh = GameObject.Find("Ground Plane Stage").GetComponent<DefaultObserverEventHandler>();
        doeh.OnTargetFound.AddListener(TargetFound);
        doeh.OnTargetLost.AddListener(TargetLost);
        interaction = GameObject.Find("Interaction");
        spawn = GameObject.Find("Spawn");
        TargetLost();
        timeText = GameObject.Find("Time").GetComponent<TMP_Text>();
        timeSlider = GameObject.Find("Slider").GetComponent<Slider>();
        timeSlider.minValue = 0;
        timeSlider.maxValue = timeSliderMax;
        timeSlider.wholeNumbers = true;
        timeSlider.onValueChanged.AddListener (delegate {ValueChangeCheck();});
    }

    private void ValueChangeCheck() {
        timeText.text = Helpers.SecsToClockFormat(84600 + (Time * increment)); //Starts at 23:30:00. Increments with 10 seconds for each movement on slider
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode) {
        if(scene.name == "AR") {
            ARScene();
        } else {
            GPSScene();
        }
    }

    public void ChangeToARScene() => SetGameState(GameState.AR);
    public void SetGPSLocationText(Vector2 _position) => gpsLocationText.text = "Current GPS Location: " + _position.ToString();
    public void SetTriggerState(bool _state) => Trigger.SetActive(_state);
    public void TargetFound() {
        interaction.SetActive(true);
        spawn.SetActive(false);
    }

    public void TargetLost() {
        interaction.SetActive(false);
        spawn.SetActive(true);
    }

    public void SetGameState(GameState _gameState) {
        switch (_gameState) {
            case GameState.GPS:
                SceneManager.LoadScene(0);
                break;
            case GameState.AR:
                SceneManager.LoadScene(1);
                break;
            default:
                break;
        }
    }

    private void OnEnable() => SceneManager.sceneLoaded += OnSceneLoaded;
    private void OnDisable() => SceneManager.sceneLoaded -= OnSceneLoaded;
}

public enum GameState {
    GPS, AR
}
