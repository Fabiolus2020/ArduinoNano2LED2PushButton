#define ledRed 3
#define ledYellow 5
#define button1 2
#define button2 4

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);


  if (digitalRead(button1) == LOW) {
    digitalWrite(ledRed, HIGH);
  } else {
    digitalWrite(ledRed, LOW);
  }



  if (digitalRead(button2) == LOW) {
    digitalWrite(ledYellow, HIGH);
  } else {
    digitalWrite(ledYellow, LOW);
  }
}
