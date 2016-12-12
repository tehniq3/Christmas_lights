// original from http://www.makeuseof.com/tag/arduino-project-flashy-christmas-lights-ornaments/
// changed by Nicu FLORICA (niq_ro) - http://www.tehnic.go.ro
// & http://www.arduinotehniq.com

void setup(){
   for(int i=4; i<13; i++){  // each led is in series with 220-470 ohms resitor
       pinMode(i,OUTPUT);
   }
}

void loop(){
  digitalWrite(random(4,14),HIGH);
  delay(50);
  digitalWrite(random(4,14),LOW);
}
