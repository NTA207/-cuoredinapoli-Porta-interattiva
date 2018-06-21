int vibr_pin=3;
int LED_Pin=6;
void setup() {
  pinMode(vibr_pin,INPUT);
  pinMode(LED_Pin,OUTPUT);
}

void loop() {
  int val;
  val=digitalRead(vibr_pin);
  if(val==1)
  {
    digitalWrite(LED_Pin,HIGH);
    delay(3000);
    digitalWrite(LED_Pin,LOW);
    delay(1000);
   }
   else
   digitalWrite(LED_Pin,LOW);
}
