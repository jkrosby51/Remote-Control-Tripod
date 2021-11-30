// Some code from:  IR read codes by Hanie kiani https://electropeak.com/learn/   

#include <IRremote.h>

int RECV_PIN = 7; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 

int redPin = 4;
int yellowPin = 3;
int bluePin = 2;

void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); 
} 

void loop() {
  if (irrecv.decode(&results)){     
    int value = results.value;     
    Serial.println(value);      
    switch(value){     
      case 10094:
      digitalWrite(redPin, HIGH);
      digitalWrite(yellowPin, LOW);
      digitalWrite(bluePin, LOW);
  } switch(value){
      case 10096:
      digitalWrite(redPin, LOW);
      digitalWrite(yellowPin, HIGH);
      digitalWrite(bluePin, LOW);
  } switch(value){
      case 10097:
      digitalWrite(redPin, LOW);
      digitalWrite(yellowPin, LOW);
      digitalWrite(bluePin, HIGH);
  }
  irrecv.resume();
  delay(100); 
  } 
}
    
