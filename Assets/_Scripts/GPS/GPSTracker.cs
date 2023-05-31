using System.Collections;
using System.Collections.Generic;
using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using UnityEngine;

public class GPSTracker : MonoBehaviour
{
    private float latitude, longitude; 
    [SerializeField] private MapRenderer mapRenderer; 
    private Vector2 arPoint = new Vector2(55.392079262060655f, 10.429227288733438f);
    private Vector2 gpsPoint;
    IEnumerator GPSLocation() {
        // Check if the user has location service enabled.
        if(!Input.location.isEnabledByUser) {
            yield break;
        }

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int waitTime = 10;
        while(Input.location.status == LocationServiceStatus.Initializing && waitTime > 0) {
            yield return Helpers.GetWait(1);
            waitTime--;
        }

        // If the service didn't initialize in 10 seconds this cancels location service use.
        if(waitTime < 1) {
            Debug.Log("Timeout");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if(Input.location.status == LocationServiceStatus.Failed) {
            Debug.Log("No GPS");
            yield break;
        } else {
            // If the connection succeeded call UpdateGPSLocation repeating every 1 second
            InvokeRepeating("UpdateGPSLocation", 0, 1f);
        }
    }

    private void UpdateGPSLocation() {
        // If the connection still succees then MapRenderer is updated to device's real location
        if(Input.location.status == LocationServiceStatus.Running) {
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            mapRenderer.Center = new LatLon(latitude, longitude);
        } else {
            //if failed print stop
            Debug.Log("Stop");
        }

        gpsPoint = new Vector2(latitude, longitude);
        GameManager.Instance.SetGPSLocationText(gpsPoint);
        float dis = Vector2.Distance(arPoint, gpsPoint);
        if(dis < 0.0005f) {
            GameManager.Instance.SetTriggerState(true);
        }
    }

    private void Awake() {
        mapRenderer = this.gameObject.GetComponent<MapRenderer>();
    }
    private void Start() {
        StartCoroutine(GPSLocation());
    }

}
