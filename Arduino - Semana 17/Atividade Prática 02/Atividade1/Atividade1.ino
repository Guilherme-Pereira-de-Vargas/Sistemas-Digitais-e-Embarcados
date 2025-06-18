// Definindo os pinos dos leds
#define pin_led1 8
#define pin_led2 9
// Definindo os pinos dos botões
#define pin_botao1 2
#define pin_botao2 3
void setup() {
  // Definindo os pinos do led como saída e os botões como entrada
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);

  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
}

void loop() {
 bool estadoA = digitalRead(pin_botao1); //Lendo o estado do botao 1
 bool estadoB = digitalRead(pin_botao2); //Lendo o estado do botao 2
  // Condicional para caso o botão 1 esteja pressionado
 if (estadoA == 1) {
  digitalWrite(pin_led1, HIGH); // Ligando o led 1
  digitalWrite(pin_led2, LOW); // Desligando o led 2
 } 
 // Condicional para caso o botão 2 esteja pressionado
 if (estadoB == 1) {
  digitalWrite(pin_led1, LOW); // Desligando o led 1
  digitalWrite(pin_led2, HIGH); // Ligando o led 2
 }
}
