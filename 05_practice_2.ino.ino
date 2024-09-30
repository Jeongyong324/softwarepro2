#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  for (int i=1; i<=10; i++) {
    int state = (i+1) % 2;
    digitalWrite(PIN_LED, state);
    delay(100);
  }
  
  while(1) {}
  
}
