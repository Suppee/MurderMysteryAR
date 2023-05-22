// ------------------------------ setup the server ------------------------------
var express = require('express');
var app = express();
var server = require('http').createServer(app);
var path = require('path');
app.use(express.static(path.join(__dirname, '')));

//server variables
var currentPotValue = 0;
var buttonPressed = 0;
var ring = 0;

//start server
server.listen(3000, function () {
    console.log("Server listening on port: 3000\n");
});

//on HTTP GET "/" (e.g.: http://localhost:3000/)
app.get('/', function (req, res) {
    //send index.html to client browser
    res.sendFile(__dirname + '/index.html');
});





// ------------------------------ Find and print the server IP-address ------------------------------ 
var networkInterfaces = require('os').networkInterfaces();
var address;

Object.keys(networkInterfaces).forEach(function(interface) {
    networkInterfaces[interface].filter(function(details) {
        if (details.family === 'IPv4' && details.internal === false) {
            address = details.address;
        }
    });
});

console.log("Server IP-address: " + address + "\n");





// ------------------------------ setup UDP (user datagram protocol) ------------------------------ 
var UPD = require("dgram");
var UDPsocket = UPD.createSocket('udp4');

//set the port for which to listen for UDP messages on
UDPsocket.bind(3001);

//store arduino IP info
var picoIPAddress;
var picoPort;

//on error
UDPsocket.on('error', function (error) {
    console.error("UDP error: " + error.stack + "\n");
});

//on begin listening
UDPsocket.on('listening', function () {
    var listenAtPort = UDPsocket.address().port;
    console.log('Server listening for UDP packets at port: ' + listenAtPort + "\n");
});

//on received message
UDPsocket.on('message', (msg, senderInfo) => {
    console.log("Received UDP message: " + msg);
    console.log("From addr: " + senderInfo.address + ", at port: " + senderInfo.port + "\n");
    var message = msg.toString() 
    if(message.length > 4) {
        currentPotValue = message;
        EmitPotValue();
    } else {
        buttonPressed = message;
        EmitButtonPressed()
    }
    
    picoIPAddress = senderInfo.address;
    picoPort = senderInfo.port;

    //send acknowledgement message
    //sendUDPMessage(arduinoIPAddress, arduinoPort, "SERVER: The message was received");
});

//send UDP message
function sendUDPMessage(receiverIPAddress, receiverPort, message) {
    var UDPMessage = Buffer.from(message);
    UDPsocket.send(UDPMessage, receiverPort, receiverIPAddress, function (error) {
        if (error) {
            client.close();
        } else {
            console.log('UDP message sent: ' + message + "\n");
        }
    });
}


// ------------------------------ setup Socket.IO ------------------------------ 
var io = require('socket.io')(server);

//on new client connection
io.on('connection', function(IOsocket) {
    console.log("Client has connected" + "\n");

    //on client disconnection
    IOsocket.on('disconnect', function () {
        console.log("Client has disconnected" + "\n");
    });

    //on "UpdateCurrentLEDValue"
    IOsocket.on('UpdateTriggerAlarm', function (data) {
        console.log("Button Pressed received from client: " + data + "\n");
        ring = data;

        io.emit('TriggerAlarm', ring);

        //If arduino, send LED value with UDP
        if (picoIPAddress != null && picoPort != null) {
            sendUDPMessage(picoIPAddress, picoPort, buttonPressed)
        }
    });
});

//emit "CurrentPotentiometerValue"
function EmitPotValue() {
    io.emit('CurrentPotentiometerValue', currentPotValue);
}

//emit "CurrentPotentiometerValue"
function EmitButtonPressed() {
    io.emit('ButtonPressed', buttonPressed);
}