void setup() {
  //define o modo de uso da porta
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  //liga o primeiro led
  delay(1000);
  //espera 1 segundo
  digitalWrite(2, LOW);
  //desliga o primeiro led
  delay(500);
  //espera meio(0.5) segundo
  digitalWrite(3, HIGH);
  //liga o segundo led
  delay(1000);
  //espera 1 segundo
  digitalWrite(3, LOW);
  //desliga o segundo led
  delay(500);
  //espera meio(0.5) segundo
}
