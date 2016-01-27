const int LED = 9;  // LED inpit, (obv)
//const int LIGHT = A0;   //I need this // nevermind, no i dont. 
int x = 0;  // this is a placeholder for the light meter thing

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(0);
Serial.println(x);

analogWrite(LED, x/2);  //the thing outputs half of what the thing reads
delay(10); // special effects by Michael Bay
analogWrite(LED, x/2); // the thing does the thing again, to make sure the thing isnt the same ad infinitum
delay(10);


}
