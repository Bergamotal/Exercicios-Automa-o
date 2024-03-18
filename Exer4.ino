//Identificação de entradas e saídas
void setup(){
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
//Leds intermitentes
void loop(){
  	
  	delay(500);
	digitalWrite(3, 1);
  	delay(1000);
	digitalWrite(3, 0);
  	delay(1000);
	digitalWrite(4, 1);
  	delay(1000);
	digitalWrite(4, 0);
  	delay(1000);
	digitalWrite(5, 1);
  	delay(500);
	digitalWrite(5, 0);

}