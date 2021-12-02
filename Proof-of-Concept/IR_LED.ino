// Some code from:  IR read codes by Hanie kiani https://electropeak.com/learn/   

#include <IRremote.h>

int RECV_PIN = 7; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 

int redPin = 4;
int yellowPin = 3;
int bluePin = 2;

#define tiltL 10094
#define tiltR 10097
#define play  10096
#define chU 255
#define chL -16321
#define chR 16575
#define chD -32651
#define ok  -28561

void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); 
} 

void loop() {
  if (irrecv.decode(&results)){     
    int value = results.value;     
    Serial.println(value);      
    switch(value){     
      case tiltL:
      digitalWrite(redPin, HIGH);
      digitalWrite(yellowPin, LOW);
      digitalWrite(bluePin, LOW);
  } switch(value){
      case play:
      digitalWrite(redPin, LOW);
      digitalWrite(yellowPin, HIGH);
      digitalWrite(bluePin, LOW);
  } switch(value){
      case tiltR:
      digitalWrite(redPin, LOW);
      digitalWrite(yellowPin, LOW);
      digitalWrite(bluePin, HIGH);
  }
  irrecv.resume();
  delay(100); 
  } 
}
    
