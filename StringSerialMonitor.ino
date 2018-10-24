String mensagem = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  if( Serial.available() > 0 ){
  
    mensagem = Serial.readStringUntil('\n');
    
    if( mensagem != "" ){
      
      Serial.println( "Mensagem: " + mensagem + "\n" );
    }    
  }
}
