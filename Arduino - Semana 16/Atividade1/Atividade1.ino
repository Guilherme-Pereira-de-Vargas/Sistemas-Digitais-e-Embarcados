#define pin_led1 8
#define pin_led2 9

#define pin_botao1 2
#define pin_botao2 3
void setup()
{
  pinMode(pin_led1, OUTPUT); // semáforo A
  pinMode(pin_led2, OUTPUT); // semáforo B
  
  pinMode(pin_botao1, INPUT); // sensor rua A
  pinMode(pin_botao2, INPUT); // sensor rua B
}

void loop() {
 bool estadoA = digitalRead(pin_botao1);
 bool estadoB = digitalRead(pin_botao2);
  
  if (estadoA == 0 && estadoB == 0) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  }
  
  if (estadoB == 1 && estadoA == 0) {
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led1, LOW);
  }
  
   if (estadoB == 0 && estadoA == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  }
  
  if (estadoA == 1 && estadoB == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  }
}