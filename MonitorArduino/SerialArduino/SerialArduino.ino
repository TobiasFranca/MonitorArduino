

const int LED = 13;

void setup()
{
	Serial.begin(9600);    //configura comunicação serial com 9600 bps
	pinMode(LED, OUTPUT);   //configura pino do led como saída
}

void loop()
{
	if (Serial.available()) //se byte pronto para leitura
	{
		switch (Serial.read())      //verifica qual caracter recebido
		{

		case 'A':                  //caso 'A'
			digitalWrite(LED, HIGH); //liga o LED
			Serial.write("LED Ligado"); //retorna informação
			break;

		case 'B':                  //caso 'B'
			digitalWrite(LED, LOW); //desliga o LED
			Serial.write("LED Desligado"); //retorna informação
			break;

		}
	}
}
