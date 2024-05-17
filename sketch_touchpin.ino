 //Mapeamento do HARDWARE
  #define touchPin 2
  #define ledPin   14
  #define limite   20

  //Variáveis Globais
  int touchValue;

//Função Principal
void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  pinMode( ledPin, OUTPUT);

}

void loop() {
  //Ler o touchPin 100 vezes
{
  for (int i = 0; i <= 100; i++)
  
{
  touchValue += touchRead(touchPin);
}
touchValue = touchValue/100;
Serial.print(touchValue);
if(touchValue < limite)
{digitalWrite(ledPin, HIGH);
Serial.println("LED Ligado");
}

else 
{
  digitalWrite(ledPin, LOW);
  Serial.println("LED Apagado");
  delay(500);
}
}
}
