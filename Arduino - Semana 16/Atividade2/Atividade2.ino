#define pin_led1 8
#define pin_led2 9

#define pin_botao1 2
#define pin_botao2 3
void setup()
{
  pinMode(pin_led1, OUTPUT); // bomba
  pinMode(pin_led2, OUTPUT); // alarme
  
  pinMode(pin_botao1, INPUT); // sensor alto
  pinMode(pin_botao2, INPUT); // sensor baixo
}

void loop() {
 bool estadoA = digitalRead(pin_botao1);
 bool estadoB = digitalRead(pin_botao2);

  if (estadoA == 1 && estadoB == 1) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }
  
  if (estadoA == 0 && estadoB == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  }
  
  if (estadoA == 0 && estadoB == 0) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
  }
  
  if (estadoA == 1 && estadoB == 0) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, HIGH);
  }
}