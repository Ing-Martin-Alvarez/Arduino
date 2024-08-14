void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
}

void loop() {

  int lectura = analogRead(A0);

  // Convierte la lectura analogica(0 - 1023) a voltaje (0 - 5V):
  float voltaje = lectura * (5.0 / 1023.0);
  Serial.println(voltaje);
  
  if(voltaje>=3 && voltaje<=5)
  {
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(10,LOW);
  }
  delay (1000);
}
