/* To connect to birdsong-pan-noise P5.js sketch */

int PinX = A0; 
int PinY = A1;
int sensorValX = 0;     
int sensorValY = 0;   

void setup() {
  Serial.begin(9600); 
}

void loop() {
  sensorValX = analogRead(PinX);            // Read the potentiometer value (0-1023)
  sensorValY = analogRead(PinY); 
  // int mapValX = map(sensorValX, 0, 1023, 0, 800);  // Map it to canvas size
  // int mapValY = map(sensorValY, 0, 1023, 0, 800);

  Serial.print(sensorValX);                  // Send the mapped value over Serial
  Serial.print(",");
  Serial.print(sensorValY);
  Serial.println("");
  delay(5);                                     // Delay to avoid flooding Serial 
}
