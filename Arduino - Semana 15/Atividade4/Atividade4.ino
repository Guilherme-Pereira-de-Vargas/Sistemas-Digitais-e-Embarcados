// Definindo os leds e botoes
#define pin_led1 12
#define pin_led2 11
#define pin_led3 10

#define pin_botao1 2
#define pin_botao2 3
int conta = 0;
int soma = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);

  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
}

void loop() {
  // Lendo o estado dos botões
  bool estado1 = digitalRead(pin_botao1);
  bool estado2 = digitalRead(pin_botao2);

  if (conta >= 0 && conta < 15)
    if (estado1 == 1 && soma == 0) {
      conta += 1;
      soma += 1;
    }
  if (estado1 == 0 && estado2 == 0) {
    soma = 0;
  }
  if (conta > 0 && conta <= 50)
    if (estado2 == 1 && soma == 0) {
      conta -= 1;
      soma += 1;
    }
  Serial.println(conta);

  if ((conta % 2) == 1) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW); }

    if (((conta >> 1) % 2) == 1) {
      digitalWrite(pin_led2, HIGH);
    } else {
      digitalWrite(pin_led2, LOW);
    }

    if (((conta >> 2) % 2) == 1) {
      digitalWrite(pin_led3, HIGH);
    } else {
      digitalWrite(pin_led3, LOW);
    }

    if (((conta >> 3) % 2) == 1) {
      digitalWrite(pin_led3, HIGH);
    } else {
      digitalWrite(pin_led3, LOW);
    }
    
}