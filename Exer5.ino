const int ledPinos[] = {3, 4, 5};
const int numLEDs = sizeof(ledPinos) / sizeof(ledPinos[0]);

void setup() {
 
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPinos[i], OUTPUT);
  }
}

void loop() {
  int tempo_ms = 5000; 

  while (tempo_ms >= 5) { 
    for (int i = 0; i < numLEDs; i++) {
    
      digitalWrite(ledPinos[i], HIGH);
      delay(tempo_ms);

      
      digitalWrite(ledPinos[i], LOW);
      delay(tempo_ms);
    }
    tempo_ms = tempo_ms * 0.8;  
  }
}
