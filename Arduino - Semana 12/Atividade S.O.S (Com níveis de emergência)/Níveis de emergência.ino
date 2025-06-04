#define led1 12
#define led2 13

#define botao1 3
#define botao2 2
#define botao3 1

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop()
{
 bool estado1 = digitalRead(botao1);
 bool estado2 = digitalRead(botao2);
 bool estado3 = digitalRead(botao3);
   
  if (estado1 == 1 && estado2 == 0 && estado3 == 0) {
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 delay(1500);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 delay(1500);
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
  if (estado1 == 0 && estado2 == 1 && estado3 == 0) {
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 delay(1000);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 delay(1000);
  }
  
  else {
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
  }
  
  if (estado1 == 0 && estado2 == 0 && estado3 == 1) {
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 delay(500);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 delay(500);
  }
  
  else {
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
  }
}