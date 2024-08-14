#define LA 8
#define LB 9
#define LR 10

void setup() {
  pinMode (LA,OUTPUT);
  pinMode (LB,OUTPUT);
  pinMode (LR,OUTPUT);
}

void loop() {
  hiloLA();
  hiloLB();
  hiloLR();
}

void hiloLA(){
  static long ultimotiming = 0;
  static int estadoLED = LOW;

  long timing = millis();

  if(timing - ultimotiming > 1000){
    ultimotiming = timing;
    if(estadoLED == LOW){
      digitalWrite(LA, HIGH);
      estadoLED = HIGH;
    }else{
      digitalWrite(LA, LOW);
      estadoLED = LOW;
    }
  }
}


void hiloLB(){
  static long ultimotiming = 0;
  static int estadoLED = LOW;

  long timing = millis();

  if(timing - ultimotiming > 500){
    ultimotiming = timing;
    estadoLED = !estadoLED;
    digitalWrite(LB, estadoLED);
  }
}

void hiloLR(){
  digitalWrite(LR, HIGH);
}
