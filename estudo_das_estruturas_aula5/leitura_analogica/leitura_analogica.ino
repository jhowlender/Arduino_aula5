/**
 * Leitura Analogica
 * @author Jhonata Reis
 */
 

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
 }

void loop() {
  int leitura;
  leitura = analogRead(A0);
  Serial.println(leitura);
  if (leitura <= 200){
    digitalWrite(2, HIGH);
  }
  if (leitura  <= 300){
    digitalWrite(3, HIGH);
  } 
   
  if (leitura <= 400){
    digitalWrite(4, HIGH);
  }
  if (leitura <= 500){
    digitalWrite(5, HIGH);
  }
}  
