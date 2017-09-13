

const int LED = 13;

void setup()
{
	Serial.begin(9600);    //configura comunica��o serial com 9600 bps
	pinMode(LED, OUTPUT);   //configura pino do led como sa�da
}

void loop()
{
	if (Serial.available()) //se byte pronto para leitura
	{
		switch (Serial.read())      //verifica qual caracter recebido
		{

		case 'A':                  //caso 'A'
			digitalWrite(LED, HIGH); //liga o LED
			Serial.write("LED Ligado"); //retorna informa��o
			break;

		case 'B':                  //caso 'B'
			digitalWrite(LED, LOW); //desliga o LED
			Serial.write("LED Desligado"); //retorna informa��o
			break;

		}
	}
}
