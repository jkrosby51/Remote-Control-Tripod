// Some code from:  IR read codes by Hanie kiani https://electropeak.com/learn/   

#include <IRremote.h>

int RECV_PIN = 7; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 

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

// Each switch case is linked to a different button on the remote, and will control a servo when assembled.
void loop() {     
  if (irrecv.decode(&results)){     
    int value = results.value;     
    //Serial.println(value);      
    switch(value){     
      case chU:
      Serial.println("servArm UP");
  } switch(value){
      case chD:
      Serial.println("servArm DOWN");
  } switch(value){
      case chL:
      Serial.println("servBase LEFT");
  } switch(value){
      case chR:
      Serial.println("servBase RIGHT");    
  } switch(value){
      case ok:
      Serial.println("Taking Picture");
      delay(1000);
  } switch(value){
      case 0:
      Serial.println("null");
      
  }
  irrecv.resume();
  delay(50); 
  } 
}
    
