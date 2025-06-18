// Definindo os pinos dos leds
#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
// Definindo os pinos dos botões
#define pin_botao1 2
#define pin_botao2 3
#define pin_botao3 4
#define pin_botao4 5
void setup() {
  // Definindo os pinos leds como saída e botões como saída
  pinMode(pin_led1, OUTPUT);  // m1
  pinMode(pin_led2, OUTPUT);  // m2
  pinMode(pin_led3, OUTPUT);  // valvula - P
  pinMode(pin_led4, OUTPUT);  // alarme - AL

  pinMode(pin_botao1, INPUT); // sensor A
  pinMode(pin_botao2, INPUT); // sensor B
  pinMode(pin_botao3, INPUT); // sensor C
  pinMode(pin_botao4, INPUT); // sensor D
}

void loop() {
  // Lendo os valores dos botões (sensores) (0 ou 1) 
  bool estadoA = digitalRead(pin_botao1);  // sensor A
  bool estadoB = digitalRead(pin_botao2);  // sensor B
  bool estadoC = digitalRead(pin_botao3);  // sensor C
  bool estadoD = digitalRead(pin_botao4);  // sensor D

   // Condicional para caso a água esteja em nivel máximo
  if (estadoA == 1 && estadoB == 1 && estadoC == 1 && estadoD == 1) {
    digitalWrite(pin_led3, LOW); // Fechar a Válvula (P) acima de B acima de nível B
    digitalWrite(pin_led1, HIGH); // Acionar a bomba M1 acima de B acima de nível B
    digitalWrite(pin_led2, HIGH); // Acionar a bomba M2 acima de nível B
  }
  // Condicional para caso a água esteja em nível abaixo de B
  if (estadoA == 0 && estadoB == 0) {
    digitalWrite(pin_led3, HIGH); // Abrir a válvula (P) caso a água esteja nível abaixo de B
    digitalWrite(pin_led1, HIGH); // Acionar somente a bomba M1 caso a água esteja em nivel abaixo de B
    digitalWrite(pin_led2, LOW); // Desligar a bomba M2 caso a água esteja em nível abaixo de B
  }
   // Condicional para caso a água esteja em nível abaixo de C
  if (estadoA == 0 && estadoB == 0 && estadoC == 0) {
    digitalWrite(pin_led4, HIGH); // Acionar o alarme (AL) caso o nível esteja abaixo de C
  }
  // Condicional para caso o nível da agua esteja abaixo de D
  if (estadoD == 0) {
    digitalWrite(pin_led1, LOW); // Desligar a bomba M1 caso o nível da agua esteja abaixo de D
    digitalWrite(pin_led2, LOW); // Desligar a bomba M2 caso o nível da agua esteja abaixo de D
  }
}