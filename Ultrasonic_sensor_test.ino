const int trig = 2;
const int echo = 15;

float duration, distance;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  int length = data();
  Serial.print("Distance: ");
  Serial.print(length);
  Serial.println(" cm");
  delay(1000);

}
float data(){
  // Send a pulse to the TRIG pin
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Read the echo pin
  duration = pulseIn(echo, HIGH);

  // Calculate the distance
  distance = (duration / 2) / 29.1;

  return distance;
}