// Definindo os leds e botoes
#define pin_led1 8
#define pin_led2 9
#define pin_led3 10

#define pin_botao1 1
#define pin_botao2 2
#define pin_botao3 3

int vagasocupadas = 0; // vagasocupadas ocupadas no estacionamento
int soma = 0; // Variavel auxiliar 

void setup() {
  // Definindo como "entrada" ou "saida" de dados cada led e botao
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT); // Led de liberado
  pinMode(pin_led2, OUTPUT); // Led de lotado
  pinMode(pin_led3, OUTPUT); // Led de verificação (operador)

  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
}

void loop() {
  // Lendo o estado dos botões
  bool estado1 = digitalRead(pin_botao1);  // Sensor entrada de veiculos
  bool estado2 = digitalRead(pin_botao2);  // Sensor saida de veiculos
  bool estado3 = digitalRead(pin_botao3);  // Botao contagem zero

  // Condicional para somar a variável de vagasocupadas ocupadas quando o sensor de entrada seja ativado
  if (vagasocupadas >= 0 && vagasocupadas < 10)
    if (estado1 == 1 && soma == 0) {
      vagasocupadas += 1;
      soma += 1;
    }
  // Condicional para zerar a variável auxiliar sempre que nenhum dos botões estiverem pressionados
  if (estado1 == 0 && estado2 == 0) {
    soma = 0;
  }
  // Condicional para diminuir a variável de vagasocupadas ocupadas quando o sensor de saida seja ativado
  if (vagasocupadas > 0 && vagasocupadas <= 10)
    if (estado2 == 1 && soma == 0) {
      vagasocupadas -= 1;
      soma += 1;
    }
  // Mostrando no serial a quantidade de vagasocupadas ocupadas
  Serial.println(vagasocupadas);
  // Condicional para caso o estacionamento esteja lotado, ligue o led 'lotado'
  if (vagasocupadas == 10) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW); // Caso não esteja lotado, desligue o led
  }
  // Condicional para que caso o estacionamento tenha vagas disponiveis  ligue o led de 'liberado'
  if (vagasocupadas < 10 && vagasocupadas > 0) {
    digitalWrite(pin_led2, HIGH);
  } else {
    digitalWrite(pin_led2, LOW); // Caso nao tenha vagas disponiveis, desligue o led
  }
  // Condicional para que caso o estacionamento esteja vazio, ligue o led 'verificar'
  if (vagasocupadas == 0) {
    digitalWrite(pin_led3, HIGH);
  } else {
    digitalWrite(pin_led3, LOW); // caso não esteja vazio, desligue o led
  }
  // Condicional para caso o botão BOT seja pressionado, zere a contagem de vagas ocupadas.
  if (estado3 == 1 && soma == 0) {
    vagasocupadas = 0;
    soma += 1;
  }
}