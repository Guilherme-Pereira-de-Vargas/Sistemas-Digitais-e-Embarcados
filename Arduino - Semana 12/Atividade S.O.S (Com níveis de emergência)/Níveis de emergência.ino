#define pin_led1 12
#define pin_led2 13

#define pin_botao1 3
#define pin_botao2 2
#define pin_botao3 1

void setup()
{
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
}

void loop()
{
 bool estado1 = digitalRead(pin_botao1);
 bool estado2 = digitalRead(pin_botao2);
 bool estado3 = digitalRead(pin_botao3);
   
  if (estado1 == 1 && estado2 == 0 && estado3 == 0) {
 digitalWrite(pin_led1, HIGH);
 digitalWrite(pin_led2, LOW);
 delay(1500);
 digitalWrite(pin_led1, LOW);
 digitalWrite(pin_led2, HIGH);
 delay(1500);
  }
  
  else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }
  
  if (estado1 == 0 && estado2 == 1 && estado3 == 0) {
 digitalWrite(pin_led1, HIGH);
 digitalWrite(pin_led2, LOW);
 delay(1000);
 digitalWrite(pin_led1, LOW);
 digitalWrite(pin_led2, HIGH);
 delay(1000);
  }
  
  else {
   digitalWrite(pin_led1, LOW);
   digitalWrite(pin_led2, LOW);
  }
  
  if (estado1 == 0 && estado2 == 0 && estado3 == 1) {
 digitalWrite(pin_led1, HIGH);
 digitalWrite(pin_led2, LOW);
 delay(500);
 digitalWrite(pin_led1, LOW);
 digitalWrite(pin_led2, HIGH);
 delay(500);
  }
  
  else {
   digitalWrite(pin_led1, LOW);
   digitalWrite(pin_led2, LOW);
  }
}
