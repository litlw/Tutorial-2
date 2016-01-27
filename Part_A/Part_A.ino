
const int Mike = 9; //This is Mike. He works for Dave
const int Dave = 7; // THis is Dave, he tells Mike what to do
int val = 0; //this is the place where Dave puts his notes
int old_val = 0; // this is the outdated copy of Dave's notes
int state = 0; // This is where Mike is currently
int work = 128; // Stores the brightness value 


unsigned long start = 0; // when did Mike start
//unsure what unsigned long means. Probably something related to holding an integer's duration


void setup() {
pinMode(Mike, OUTPUT); // tell Arduino LED is an output pinMode(BUTTON, INPUT); // and BUTTON is an input
}
void loop() {
val = digitalRead(Dave); //here is where Dave says wether or not he wants work done.
  
if ((val == HIGH) && (old_val == LOW)) { //if Dave's notes are inconsistent with the old copies, AND he wants work done
state = 1 - state; //then go do some work, Mike
                      
start = millis(); // this thing, the millis thing, is calling the Arduino clock thing. 

delay(10);
}
 
if ((val == HIGH) && (old_val == HIGH)) { //if Dave's notes are consistent, the work needs to change

if (state == 1 && (millis() - start) > 200) {
work++; // add to work by one. More effective than work = work + 1;

delay(10); //keeps pace slower, i guess. it works anyways. 

if (work > 255) { 
work = 0; //if there was too much work (or we just maxed the number for arduno), work resets and gets done again
} }

}
old_val = val; //finally here is where Dave's notes get updated, and the program runs again, creating
//consistency or inconsistency. Depends really. 
if (state == 1) {
analogWrite(Mike, work); //this is where we tell mike to do work. 

}else{ }
}
