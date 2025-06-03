// Definindo os leds e botoes
#define pin_led1 11
#define pin_led2 12
#define pin_led3 13

#define pin_botao1 1
#define pin_botao2 2
void setup()
{
 pinMode(pin_led1, OUTPUT);
 pinMode(pin_led2, OUTPUT);
 pinMode(pin_led3, OUTPUT);
  
 pinMode(pin_botao1, INPUT);
 pinMode(pin_botao2, INPUT);
}

void loop() {
 // Lendo o estado dos botões
 bool estado1 = digitalRead(pin_botao1);
 bool estado2 = digitalRead(pin_botao2);
  
  // IF LED1
  if (estado1 == 1 && estado2 == 1) {
    digitalWrite(pin_led1, HIGH);
  }
  
  else {
    digitalWrite(pin_led1, LOW);
  }
  
  // IF LED2
  if (estado1 == 1 || estado2 == 1) {
    digitalWrite(pin_led2, HIGH);
  }
  
  else {
    digitalWrite(pin_led2, LOW);
  }
  
  // IF LED3
  if (estado1 == 1 != estado2 == 1) {
    digitalWrite(pin_led3, HIGH);
  }
  
  else {
    digitalWrite(pin_led3, LOW);
  }
}
