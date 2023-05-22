using System;
using System.Globalization;
using System.Collections;
using System.Collections.Generic;
using SocketIOClient;
using UnityEngine;

public class UDP : MonoBehaviour
{
    private static SocketIOUnity socket;
    // Start is called before the first frame update
    void Start() {
        var uri = new Uri("http://localhost:3000/");
        socket = new SocketIOUnity(uri, new SocketIOOptions{
            Query = new Dictionary<string, string> {
                    {"token", "UNITY" }
                },
            EIO = 4,
            Transport = SocketIOClient.Transport.TransportProtocol.WebSocket
        });
        ///// reserved socketio events
        socket.OnConnected += (sender, e) => {
            Debug.Log("socket.OnConnected");
        };
        socket.OnPing += (sender, e) => {
            Debug.Log("Ping");
        };
        socket.OnPong += (sender, e) => {
            Debug.Log("Pong: " + e.TotalMilliseconds);
        };
        socket.OnDisconnected += (sender, e) => {
            Debug.Log("Disconnect: " + e);
        };
        socket.OnReconnectAttempt += (sender, e) => {
            //Debug.Log($"{DateTime.Now} Reconnecting: attempt = {e}");
        };

        Debug.Log("Connecting...");
        socket.Connect();

        //When button pressed on the pico then spawn AR model
        socket.On("ButtonPressed", (response) => {
            //Spawn AR Model
        });

        //Move characters according to time (potentiometerValue)
        socket.On("CurrentPotentiometerValue", (response) =>{
            //UnityThread.executeInUpdate(() => {});
        });

        //float.Parse(values[3], CultureInfo.InvariantCulture.NumberFormat);

        //Need to receive data from potentiometer
        //Need to notify pico when at the right location
        //need to recieve when button is hit.   
    }

    //Trigger Alarm to ring because player is at the right location. 
    public static void EmitTriggerAlarm() => socket.Emit("TriggerAlarm", "Ring");
}
