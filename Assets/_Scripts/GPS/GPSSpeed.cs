using UnityEngine;
using UnityEngine.UI;

public class GPSSpeed : MonoBehaviour
{
    public Text speedText;
    private float speed = 0f;
    private float lastLatitude = 0f;
    private float lastLongitude = 0f;
    private float timeInterval = 0f;

    private void Start()
    {
        // Check if device supports location services
        if (!Input.location.isEnabledByUser)
        {
            Debug.LogError("Location services not enabled on device");
            return;
        }

        // Start location services
        Input.location.Start();

        // Set the desired accuracy for GPS data
        Input.location.Start(1f, 1f);

        // Store the current time to calculate the time interval later
        timeInterval = Time.time;
    }

    private void Update()
    {
        // Check if GPS data is available
        if (Input.location.status == LocationServiceStatus.Running)
        {
            // Calculate the time interval between the current frame and the previous frame
            float elapsedTime = Time.time - timeInterval;
            timeInterval = Time.time;

            // Calculate the distance between the current position and the previous position
            float distance = Vector2.Distance(new Vector2(lastLatitude, lastLongitude),
                                              new Vector2(Input.location.lastData.latitude, Input.location.lastData.longitude));

            // Calculate the speed using the distance and time interval
            speed = distance / elapsedTime;

            // Store the current latitude and longitude for the next frame
            lastLatitude = Input.location.lastData.latitude;
            lastLongitude = Input.location.lastData.longitude;
        }

        // Display the speed in the specified Text component
        speedText.text = "Speed: " + speed.ToString("F2") + "m/s";
    }

    private void OnDestroy()
    {
        // Stop location services when the script is destroyed
        Input.location.Stop();
    }
}