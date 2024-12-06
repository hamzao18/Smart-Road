
#define IR1_PIN 4
#define IR2_PIN 5
#define IR3_PIN 6

#define LED1_PIN 7
#define LED2_PIN 12
#define LED3_PIN 9

void setup() {
  pinMode(IR1_PIN, INPUT);
  pinMode(IR2_PIN, INPUT);
  pinMode(IR3_PIN, INPUT);

  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int ir1State = digitalRead(IR1_PIN); 
  int ir2State = digitalRead(IR2_PIN); 
  int ir3State = digitalRead(IR3_PIN); 
  if (ir1State == LOW) {
    digitalWrite(LED1_PIN, HIGH); 
  } else {
    digitalWrite(LED1_PIN, LOW); 
  }

  if (ir2State == LOW) {
    digitalWrite(LED2_PIN, HIGH); 
  } else {
    digitalWrite(LED2_PIN, LOW); 
  }

  if (ir3State == LOW) {
    digitalWrite(LED3_PIN, HIGH); 
  } else {
    digitalWrite(LED3_PIN, LOW); 
  }
 delay(100);
}
