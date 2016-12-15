// original from http://www.makeuseof.com/tag/arduino-project-flashy-christmas-lights-ornaments/
// changed by Nicu FLORICA (niq_ro) - http://www.tehnic.go.ro
// & http://www.arduinotehniq.com

void setup(){
   for(int i=2; i<19; i++){  // each led is in series with 220-470 ohms resitor to GND
       pinMode(i,OUTPUT);
   }
}

void loop(){
  digitalWrite(random(2,19),HIGH);
  delay(random(3,15));
  digitalWrite(random(2,19),LOW);
  delay(random(3,15));
}
