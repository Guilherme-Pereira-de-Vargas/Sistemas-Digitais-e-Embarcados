// Definindo o pino dos leds
#define pin_led1 8

// Criando variáveis do tipo inteiro
int soma = 9;
int tick = 0;

// Definindo os pinos dos botões
#define pin_botao1 2
void setup() {
  // Definindo os leds como saída e os botões como entrada.
  pinMode(pin_led1, OUTPUT);

  pinMode(pin_botao1, INPUT);
}

void loop() {
 bool estadoA = digitalRead(pin_botao1); // Lendo o estado do botão 1

  // Condicional para caso o botão esteja pressionado e o tick ser igual a 0
 if (estadoA == 1 && tick == 0) {
    soma += 1; // Adiciona-se um na variável soma
    tick += 1; // Adiciona-se um na variável tick
  }
  // Condicional para caso o botão não esteja pressionado
  if (estadoA == 0) {
    tick = 0; // Zerando a variável tick
  }
  // Condicional para caso o valor da variável soma seja par
  if ((soma % 2) == 0) {
    digitalWrite(pin_led1, HIGH); // Ligando o led 1
  } else { // Caso seja ímpar:
    digitalWrite(pin_led1, LOW); // Desligando o led 1
  }
}