const int IR_pin = 15;

void setup() {
  pinMode(IR_pin,INPUT);
  Serial.begin(9600);
}

void loop() {
  bool state = digitalRead(IR_pin);
  if(state){
    Serial.println("Object is Far");
  }else{
    Serial.println("Object is Near");
  }
}
