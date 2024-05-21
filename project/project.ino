#include<ESP8266WiFi.h>
//#include<ThingSpeak.h>
WiFiClient client;
long myChannelNumber = 1809412;
const char myWriteAPIKey[] = "JW6XR33GXY5ATQWB";
void setup() {
  Serial.begin(9600);
  WiFi.begin("T2-904", "987654321");
  while(WiFi.status() != WL_CONNECTED){delay(200); Serial.print("..");}
  Serial.println();
  Serial.println(WiFi.localIP());
  dht.begin();
  ThingSpeak.begin(client);
}

void loop() {
  // put your main code here, to run repeatedly:
  float db, aqi;
  Serial.println("Temperature: " + (String)t);
  Serial.println("Humidity: " + (String)h);
  ThingSpeak.writeField(myChannelNumber, 3, db, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 4, aqi, myWriteAPIKey);
  delay(200);
}
