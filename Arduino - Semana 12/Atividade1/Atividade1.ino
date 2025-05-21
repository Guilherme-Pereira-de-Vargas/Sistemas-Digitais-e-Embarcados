#define pin_led1 8  // Definindo que o pino 8 se chama "pin_led1"
#define pin_led2 9  // Definindo que o pino 9 se chama "Pin_led2"
#define pin_led3 10 // Definindo que o pino 10 se chama "Pin_led3"
#define pin_led4 11 // Definindo que o pino 11 se chama "Pin_led4"

void setup() {
Serial.begin(9600);
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);
}

void loop() {
if (Serial.available() == 1 ) {
  char i = Serial.read();
  Serial.println(i);
}
Serial.println("Liga LED");
digitalWrite(pin_led1, HIGH);
digitalWrite(pin_led2, HIGH);
digitalWrite(pin_led3, HIGH);
digitalWrite(pin_led4, HIGH);
delay(1000);
Serial.println("Desliga LED");
digitalWrite(pin_led1, LOW);
digitalWrite(pin_led2, LOW);
digitalWrite(pin_led3, LOW);
digitalWrite(pin_led4, LOW);
delay(1000);
}
