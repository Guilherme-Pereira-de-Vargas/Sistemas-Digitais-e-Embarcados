// definindo os leds e botoes
#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11

#define pin_botaoA 1
#define pin_botaoB 2
#define pin_botaoC 3

void setup() {
  // Definindo dispositivos de entrada (botoes) e saida (leds)
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);

  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);
}

void loop() {
  // lendo os estados dos botoes e salvando em variáveis
 bool estadoA = digitalRead(pin_botaoA);
 bool estadoB = digitalRead(pin_botaoB);
 bool estadoC = digitalRead(pin_botaoC);
 // condicional para caso o botão 1 seja pressionado, ligue o led 1
 if (estadoA == 1) {
  digitalWrite(pin_led1, HIGH);
 } else{ 
  digitalWrite(pin_led1, LOW); // caso não esteja pressionado, desligue o led
 }
  // Condicional para caso o botão 2 seja pressionado, ligue o led 2
 if (estadoB == 1) {
  digitalWrite(pin_led2, HIGH);
 } else {
  digitalWrite(pin_led2, LOW); // caso não esteja pressionado, desligue o led
 }
  // condicional para caso o botão 3 esteja pressionado, ligue o led 3
 if (estadoC == 1) {
  digitalWrite(pin_led3, HIGH);
 } else {
  digitalWrite(pin_led3, LOW); // caso não esteja pressionado, desligue o led
 }
}