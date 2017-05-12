const int Botao1 = 2;
const int Botao2 = 3;
const int Botao3 = 6;
const int Buzzer = 10; //O buzzer está colocado no pino 10
int EstadoBotao1 = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
int sensorPin = 1;
float value = 0;

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(Botao1, INPUT);
  pinMode(Botao2, INPUT);
  pinMode(Botao3, INPUT);
  Serial.begin(9600);
}
    
void loop(){
  EstadoBotao1 = digitalRead(Botao1);
  EstadoBotao2 = digitalRead(Botao2);
  EstadoBotao3 = digitalRead(Botao3);

  value = analogRead(sensorPin);
  Serial.println(value);
  
  if(EstadoBotao1 && !EstadoBotao2 && !EstadoBotao3) {
    //digitalWrite(ledPin1, HIGH);
    tone(Buzzer, (pow(((value - 500.0)/300.0)*100, 7))/100000000000.0 );
  }
      
  if(EstadoBotao2 && !EstadoBotao1 && !EstadoBotao3) {
    //digitalWrite(ledPin2, HIGH);
    tone(Buzzer, 500);
  }
  
  if(EstadoBotao3 && !EstadoBotao2 && !EstadoBotao1) {
    //digitalWrite(ledPin3, HIGH);
    tone(Buzzer, 1000);
  }
  noTone(Buzzer);
 }
