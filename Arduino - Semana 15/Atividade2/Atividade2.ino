// Definindo os botoes
#define pin_botao1 2
#define pin_botao2 3
int conta = 0;
int soma = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(pin_botao1, INPUT);
 pinMode(pin_botao2, INPUT);
}

void loop() {
 // Lendo o estado dos botões
 bool estado1 = digitalRead(pin_botao1);
 bool estado2 = digitalRead(pin_botao2);

if (estado1 == 1 && soma == 0) {
 conta += 1;
 soma += 1;
}
if (estado1 == 0 && estado2 == 0) {
  soma = 0;
}
if (estado2 == 1 && soma == 0) {
  conta -= 1;
  soma += 1;
}
Serial.println(conta);

}