

int botao=2;
int estadoBotao=0;
int pinoLedVerde=11;
int pinoLedAmarelo=12;
int pinoLedVermelho=13;



void setup() {
  pinMode(pinoLedVerde,OUTPUT);
  pinMode(pinoLedAmarelo,OUTPUT);
  pinMode(pinoLedVermelho,OUTPUT);
  pinMode(botao,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  Serial.println(digitalRead(botao));
  estadoBotao=digitalRead(botao);

 digitalWrite(pinoLedVerde,HIGH);


}
