// -------- INPUT --------
int potPin = A0;   // Potentiometer (power level)

// -------- LOAD LEDs --------
int highLoad = 8;   // High priority load
int midLoad  = 9;   // Medium priority load
int lowLoad  = 10;  // Low priority load

// -------- STATUS LEDs --------
int greenLED  = 12; // NORMAL
int yellowLED = 13; // MODERATE
int redLED    = A1; // SEVERE

// -------- BUZZER --------
int buzzer = 11;

void setup() {
  // Load LEDs
  pinMode(highLoad, OUTPUT);
  pinMode(midLoad, OUTPUT);
  pinMode(lowLoad, OUTPUT);

  // Status LEDs
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // Buzzer
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int powerLevel = analogRead(potPin);

  Serial.print("Power Level: ");
  Serial.println(powerLevel);

  // ---------- NORMAL ----------
  if (powerLevel > 700) {
    digitalWrite(highLoad, HIGH);
    digitalWrite(midLoad, HIGH);
    digitalWrite(lowLoad, HIGH);

    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    digitalWrite(buzzer, LOW);
  }

  // ---------- MODERATE ----------
  else if (powerLevel > 400) {
    digitalWrite(highLoad, HIGH);
    digitalWrite(midLoad, HIGH);
    digitalWrite(lowLoad, LOW);

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    digitalWrite(buzzer, LOW);
  }

  // ---------- SEVERE ----------
  else {
    digitalWrite(highLoad, HIGH);
    digitalWrite(midLoad, LOW);
    digitalWrite(lowLoad, LOW);

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    digitalWrite(buzzer, HIGH);
  }

  delay(300);
}
