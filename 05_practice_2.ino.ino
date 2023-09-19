unsigned int count;
void setup() {
  pinMode(7, OUTPUT);
  count = 0;
  digitalWrite(7, LOW);
  delay(1000);
}

void loop() {
  if(count < 5){
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(100);
    ++count;
  }
  else{
    while(1){
      digitalWrite(7, HIGH);
    }
  }
}