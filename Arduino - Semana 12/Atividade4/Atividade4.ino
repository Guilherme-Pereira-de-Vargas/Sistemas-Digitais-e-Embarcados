// Definindo os leds e botoes
#define led1 11
#define led2 12
#define led3 13

#define botao1 1
#define botao2 2
void setup()
{
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
  
 pinMode(botao1, INPUT);
 pinMode(botao2, INPUT);
}

void loop() {
 // Lendo o estado dos botões
 bool estado1 = digitalRead(botao1);
 bool estado2 = digitalRead(botao2);
  
  // IF LED1
  if (estado1 == 1 && estado2 == 1) {
    digitalWrite(led1, HIGH);
  }
  
  else {
    digitalWrite(led1, LOW);
  }
  
  // IF LED2
  if (estado1 != estado2) {
    digitalWrite(led2, HIGH);
  }
  
  else {
    digitalWrite(led2, LOW);
  }
  
  // IF LED3
  if (estado1 == 0 && estado2 == 0) {
    digitalWrite(led3, HIGH);
  }
  
  else {
    digitalWrite(led3, LOW);
  }
}
