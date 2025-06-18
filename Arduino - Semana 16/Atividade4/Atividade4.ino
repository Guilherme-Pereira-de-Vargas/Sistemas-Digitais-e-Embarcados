#define pin_led1 8

#define pin_botao1 2
#define pin_botao2 3
#define pin_botao3 4

int conta = 0;
int somaA = 0;
int somaB = 0;
int somaC = 0;

int contaA = 0;
int contaB = 0;
int contaC = 0;
void setup()
{
  pinMode(pin_led1, OUTPUT); // valvula
  
  pinMode(pin_botao1, INPUT); // sensor A
  pinMode(pin_botao2, INPUT); // sensor B
}

void loop() {
 conta = (contaA + contaB + contaC);
 bool estadoA = digitalRead(pin_botao1);
 bool estadoB = digitalRead(pin_botao2);
 bool estadoC = digitalRead(pin_botao3);
  
  if (estadoA == 1 && somaA == 0) {
    contaA++;
    somaA++;
  }
  
  if (estadoA == 0) {
    somaA = 0;
    contaA = 0;
  }
  
  if (estadoB == 1 && somaB == 0) {
    contaB++;
    somaB++;
  }
  
  if (estadoB == 0) {
    somaB = 0;
    contaB = 0;
  }
  
  if (estadoC == 1 && somaC == 0) {
    contaC++;
    somaC++;
  }
  
  if (estadoC == 0) {
    somaC = 0;
    contaC = 0;
  }
  
  if ((conta % 2) == 1) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }	
}