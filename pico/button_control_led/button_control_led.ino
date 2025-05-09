#define led_pin 15
#define button_pin 16

void setup(){
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLDOWN);
  
}


void loop(){
  if (digitalRead(button_pin)== LOW){
    digitalWrite(led_pin, HIGH);
  }
  else{
    digitalWrite(led_pin, LOW);
  }
}
