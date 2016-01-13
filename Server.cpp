#include "Server.h"

byte mac[] = { 0x54, 0x34, 0x41, 0x30, 0x30, 0x31 };                                       
IPAddress ip(192, 168, 115, 179);                        
EthernetServer server(DEFAULT_PORT);

void InitializeServer(){
  	Ethernet.begin(mac, ip);
    server.begin();

    Serial.print("IP Address: ");
    Serial.println(Ethernet.localIP());
}

EthernetClient GetAvailableClient(){
	return server.available();
}