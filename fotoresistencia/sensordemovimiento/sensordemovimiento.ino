int TRIG = 2;
int ECHO = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
long tiempo;
long distancia;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(TRIG,0);
  delayMicroseconds(5);
  digitalWrite(TRIG, HIGH);
  tiempo=pulseIn(ECHO, HIGH);
  tiempo = tiempo/2;
  distancia = int(0.034*tiempo);
  Serial.print("Distancia ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(1000);

  if (distancia <= 10){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);    
  }else if((distancia > 10)&&(distancia <= 20)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);  
  }else if(distancia > 20){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);  
  }
}
