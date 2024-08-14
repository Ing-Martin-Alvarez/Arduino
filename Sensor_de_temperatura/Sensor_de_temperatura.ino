int led1 = 2;
int led2 = 3;
int led3 = 4;
float lecturadelsensor;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
lecturadelsensor = analogRead(A1);
  Serial.println(lecturadelsensor);
  if (lecturadelsensor < 72){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }else if((lecturadelsensor >= 72)&&(lecturadelsensor <90)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }else if ((lecturadelsensor >= 90)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
}
