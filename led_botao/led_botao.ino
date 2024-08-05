void setup() {
  //definindo modo das entrada no arduino
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(3) = HIGH){ //se o botão estiver pressionado
    
    digitalWrite(2, HIGH);
    //liga o led na porta 2
    
  } else { //se o botão não estiver pressionado
    
    digitalWrite(2, LOW);
    //desliga o led na porta 2
  }
}
