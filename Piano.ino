int Botao1 = 2;
int Botao2 = 3;
int Botao3 = 6;
int Buzzer = 10; //O buzzer está colocado no pino 10
int EstadoBotao1 = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
int sensorLuminosidade = 1;

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
    tone(Buzzer, 500);
  }
      
  if(EstadoBotao2 && !EstadoBotao1 && !EstadoBotao3) {
    tone(Buzzer, 1000);
  }
  
  if(EstadoBotao3 && !EstadoBotao2 && !EstadoBotao1) {
    tone(Buzzer, 1500);
  }

  noTone(Buzzer);
 }
