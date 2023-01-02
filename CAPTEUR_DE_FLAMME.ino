

const int Capteur_de_flamme = A1 ;
const int buzzer_Actif = 6 ;
int valeur_flamme ;
int lampe = 11 ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzer_Actif, OUTPUT);
pinMode(Capteur_de_flamme, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
valeur_flamme = analogRead (Capteur_de_flamme);

if(valeur_flamme 1023){
  
  tone(buzzer_Actif, 800, 800);
  delay(250);
  tone(buzzer_Actif, 600, 800);
  delay(250);
  digitalWrite(lampe, HIGH);
  
  }
else {
  digitalWrite(buzzer_Actif, LOW);
  digitalWrite(lampe, LOW);
  }

Serial.println("La valeur de flamme actuelle est de :");
Serial.println(valeur_flamme);
delay(150);



}
