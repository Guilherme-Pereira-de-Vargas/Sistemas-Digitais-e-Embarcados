#define pin_led1 13
#define pin_led2 12
#define pin_led3 11
#define pin_led4 10
#define pin_botao 2

void setup() {
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);
pinMode(pin_botao, INPUT);
}

void loop() {
  bool estado = digitalRead(pin_botao);
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led4, LOW);
  }
  else {
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led4, HIGH);
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led3, LOW);
  }
}

