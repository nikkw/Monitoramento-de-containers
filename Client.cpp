#include "Client.h"

void ProcessClientMessage(){   
    // listen for incoming clients
    EthernetClient client = GetAvailableClient();

    if (client) 
    {  
        // an http request ends with a blank line
        boolean currentLineIsBlank = true;

        while (client.connected()) 
        {
            if (client.available()) 
            {
                char c = client.read();

                // if you've gotten to the end of the line (received a newline
                // character) and the line is blank, the http request has ended,
                // so you can send a reply
                if (c == '\n' && currentLineIsBlank) 
                {
                    //Magnetic;Noise;Temperature;Vibration;Voltage

                    String data = "";

                    data += String(GetMagnetic());
                    data += ";";

                    data += String(GetTemperature());
                    data += ";";

                    data += String(GetVibration());
                    data += ";";

                    data += String(GetVoltage());

                    client.println(data);
                    break;
                }

                if (c == '\n') {
                    // you're starting a new line
                    currentLineIsBlank = true;
                }
                else if (c != '\r') 
                {
                    // you've gotten a character on the current line
                    currentLineIsBlank = false;
                }
            }
        }

        // give the web browser time to receive the data
        delay(10);  

        // close the connection:
        client.stop();
    }
}