//Kirk McCann
// Fangchun Li comment for Assignment15.
//Adam Hartman

void setup() {
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(9, INPUT);
}


void loop() {
  if (digitalRead(9) == HIGH) {
    digitalWrite(A5, HIGH);
    delay(500);
    digitalWrite(A5, LOW);
    delay(500);

    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A4, LOW);
    delay(500);

    digitalWrite(A3, HIGH);
    delay(500);
    digitalWrite(A3, LOW);
    delay(500);
  } else {
    digitalWrite(A5, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A3, LOW);
  }
}
