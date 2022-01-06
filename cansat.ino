const int captemperature = 0 ;

void setup() {
 Serial.begin(9600);

}

void loop() {
  int valtemperature = analogRead(captemperature);
  float temperature = (valtemperature - 0.5) *100;      //calcule v -> °C
  Serial.print("temperature:");
  Serial.print(temperature); 
  Serial.println( " °C" );
  delay(1000);                                        //temps en millisecondes
}
