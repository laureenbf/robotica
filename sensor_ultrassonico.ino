int PinTrigger = 2;
int PinEcho = 3;
float TempoEcho = 0;
const float VelocidadeSom_mpors = 340; 
const float VelocidadeSom_mporus = 0.000340;

void setup()
{
  pinMode(PinTrigger, OUTPUT);
  digitalWrite(PinTrigger, LOW);
  pinMode(PinEcho, INPUT);
  Serial.begin(9600);
  delay(100);
}
void DisparaPulsoUltrassonico(){
  digitalWrite(PinTrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(PinTrigger,LOW);
  }
void loop(){
  
  DisparaPulsoUltrassonico();
  TempoEcho = pulseIn(PinEcho,HIGH);
  Serial.println("Distancia em metros: ");
  Serial.println(CalculaDistancia(TempoEcho));
  Serial.println("Distância em centímetros: ");
  Serial.println(CalculaDistancia(TempoEcho)*100);
         
  delay(2000);
  
}


float CalculaDistancia(float tempo_us){
return((tempo_us*VelocidadeSom_mporus)/2);

}
