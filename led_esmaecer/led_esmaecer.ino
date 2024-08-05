void setup() {
 //define o modo da porta no arduino
 pinMode(3, OUTPUT);
}

void loop() {
 int i = 0; //cria uma variável "i"
 
 for(i = 0; i < 255; i+5){ //enquanto "i" for menor que 255
  
  analogWrite(3, i);
  //ascende o led na porta 3 com a forca dependente da variável "i"
 }
 for(i = 255; i > 0; i+5){ //enquanto "i" for maior que 0

  analogWrite(3, i);
  //apaga o led na porta 3 com a força dependente da variável "i"
 }
}
