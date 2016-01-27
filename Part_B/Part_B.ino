const int LED = 9;  // LED inpit, (obv)
//const int LIGHT =    //I didn't need this, but kept it just in case I did
int x = 0;  // this little guy is a placeholder for my light sensor

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
 
x = analogRead(0); // i found out that analog______(0) means that the machine knows to go to A0

analogWrite(LED, x/2);  //the thing outputs half of what the thing reads
delay(10); // special effects by Michael Bay
analogWrite(LED, x/2); // the thing does the thing again, to make sure the thing isnt the same ad infinitum
delay(10);


}
