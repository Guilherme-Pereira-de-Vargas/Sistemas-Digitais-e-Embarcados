#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11

void setup() {
Serial.begin(9600);
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);
}

void loop() {
if (Serial.available() == 1) {
  char i = Serial.read();
  Serial.println(i); 

  if (i == '1') {
  digitalWrite(pin_led1, HIGH); 
  }
  if (i == '2') {
  digitalWrite(pin_led2, HIGH);
  }
  if (i == '3') {
  digitalWrite(pin_led3, HIGH);
  }
  if (i == '4') {
  digitalWrite(pin_led4, HIGH);
  }
  if (i == '5') {
  digitalWrite(pin_led1, LOW);
  }
  if (i == '6') {
  digitalWrite(pin_led2, LOW);
  }
  if (i == '7') {
  digitalWrite(pin_led3, LOW);
  }
  if (i == '8') {
  digitalWrite(pin_led4, LOW);
  }
  if (i == '9') {
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  }
  if (i == '0') {
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  }
}
}
