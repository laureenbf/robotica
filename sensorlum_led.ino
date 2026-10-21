const int pinoLDR = A0;
const int pinoLED = 7;   
int valorLDR = 0;         

void setup() {
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoLDR, INPUT);
  Serial.begin(9600);   
}

void loop() {
  valorLDR = analogRead(pinoLDR); 
  Serial.println(valorLDR); 

  if (valorLDR < 500) {
    digitalWrite(pinoLED, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
  }

  delay(100);
}
