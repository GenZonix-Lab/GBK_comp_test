const int LDR_pin = 2;

void setup() {
  pinMode(LDR_pin,INPUT);
  Serial.begin(9600);
}

void loop() {
  bool state = digitalRead(LDR_pin);
  if(state){
    Serial.println("It's Dark");
  }else{
    Serial.println("It's Bright");
  }
}
