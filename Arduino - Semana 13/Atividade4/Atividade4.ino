#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_botao1 3
#define pin_botao2 2

void setup() {
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_botao1, INPUT);
pinMode(pin_botao2, INPUT);
}

void loop() {
bool estado1 = digitalRead(pin_botao1);
bool estado2 = digitalRead(pin_botao2);

if (estado1 != estado2 == 1)
digitalWrite(pin_led1, HIGH);

}
