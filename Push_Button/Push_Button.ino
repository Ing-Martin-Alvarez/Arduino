int led2 = 3;
int estadoBoton = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led2, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {
  estadoBoton = digitalRead(5);
  Serial.println(estadoBoton);
  if (estadoBoton == 0){
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
}
