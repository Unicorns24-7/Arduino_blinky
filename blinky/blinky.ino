// Sofia Moore

#define RED_LED 7
#define GREEN_LED 4
#define RED_LED2 2
#define GREEN_LED2 8

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED2, OUTPUT);
  pinMode(GREEN_LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);
  delay(200);
  digitalWrite(RED_LED, LOW);
  delay(200);
  digitalWrite(GREEN_LED, HIGH);
  delay(200);
  digitalWrite(GREEN_LED, LOW);
  delay(200);
  digitalWrite(RED_LED2, HIGH);
  delay(200);
  digitalWrite(RED_LED2, LOW);
  delay(200);
  digitalWrite(GREEN_LED2, HIGH);
  delay(200);
  digitalWrite(GREEN_LED2, LOW);
  delay(200);
}


