#define pin_led1 8

#define pin_botao1 2
#define pin_botao2 3
void setup()
{
  pinMode(pin_led1, OUTPUT); // valvula
  
  pinMode(pin_botao1, INPUT); // sensor A
  pinMode(pin_botao2, INPUT); // sensor B
}

void loop() {
 bool estadoA = digitalRead(pin_botao1);
 bool estadoB = digitalRead(pin_botao2);

  if (estadoA == 1 && estadoB == 1) {
  	digitalWrite(pin_led1, LOW);
  }
  
  if (estadoA == 0) {
  	digitalWrite(pin_led1, HIGH);
  }
}