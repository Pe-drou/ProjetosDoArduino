//pisca um led na porta 2
void setup() {
  //define o modo da porta
pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  //ascende o led
  
  delay(1000);
  //espera 1 segundo
  
  digitalWrite(2, LOW);
  //apaga o led
  
  delay(1000);
  //espera mais 1 segundo
}
