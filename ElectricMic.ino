
int led = 13;
int led1 = 12;

int led2 = 11;
int led3 = 10;

int speak = 8;

unsigned int sample;
unsigned int sample2;

#include "pitches.h"
//const int threshold = 568;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  digitalWrite(led, LOW);
   digitalWrite(led1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

//for(int i = 0; i < 1; i++){
  //Serial.println(0);
  sample = analogRead(0 );
 // sample = analogRead(1);
 Serial.println(sample);
 
  if(sample > 509 && sample <= 580){
 
  digitalWrite(led, HIGH);
  delay(100);
  
  digitalWrite(led1, HIGH);
  delay(100);
    //digitalWrite(led, LOW);
  }
  else if(sample > 580 && sample <= 670 ){
     digitalWrite(led, HIGH);
     delay(100);
  
      digitalWrite(led1, HIGH);
      delay(100);
     // digitalWrite(led, HIGH);
      digitalWrite(led2, HIGH);
       delay(100);
       tone(speak, NOTE_C4,500);
       int pauseBetweenNotes =4 * 1.30;
    delay(pauseBetweenNotes);
  //  digitalWrite(led2, LOW);
  }
  else if(sample > 670  ){
     digitalWrite(led, HIGH);
     delay(100);
  
      digitalWrite(led1, HIGH);
      delay(100);
     // digitalWrite(led, HIGH);
      digitalWrite(led2, HIGH);
       delay(100);
    digitalWrite(led3, HIGH);
     delay(100);

     tone(speak, NOTE_A3,500);
       int pauseBetweenNotes =4 * 1.30;
    delay(pauseBetweenNotes);
  }
  else{
    digitalWrite(led, LOW);
      delay(100);

       digitalWrite(led1, LOW);
            delay(100);

        digitalWrite(led2, LOW);  
           delay(100);
               
    digitalWrite(led3, LOW);
     delay(100);
  }

//}
}
