int outPin = 2; 
int buttonPin = 3;
int readVal;



void setup()
{
  pinMode(outPin, OUTPUT);      // sets the digital pin as output
  pinMode(buttonPin,INPUT);
}


void pulse(int highMicros, int lowMicros)
{
	digitalWrite(outPin, HIGH);   // sets the pin on
	delayMicroseconds(highMicros);        // pauses for 50 microseconds      
	digitalWrite(outPin, LOW);    // sets the pin off
	delayMicroseconds(lowMicros);        // pauses for 50 microseconds      
}

void SendCode1(void)
{
		pulse(2616,808);
		pulse( 472,812);
		pulse( 468,816);
		pulse( 468,808);
		pulse( 476,808);
		pulse( 476,808);
		pulse( 468,816);
		pulse( 468,812);
		pulse( 468,388);
		pulse( 900,812);
		pulse( 472,812);
		pulse( 472,384);
		pulse( 900,812);
		pulse( 472,808);
		pulse( 472,384);
		pulse( 900,812);
		pulse( 472,808);
		pulse( 476,380);
		pulse( 900,384);
		pulse( 900,816);
		pulse( 472,808);
		pulse( 468,812);
		pulse( 472,384);
		pulse( 904,812);
		pulse( 464,388);
		pulse( 900,812);
		pulse( 472,380);
		pulse( 904,812);
		pulse( 472,388);
		pulse( 896,812);
		pulse( 468,812);
		pulse( 476,808);
		pulse( 476,808);
		pulse( 472,812);
		pulse( 472,808);
		pulse( 472,812);
		pulse( 472,816);
		pulse( 468,384);
		pulse( 900,812);
		pulse( 468,388);
		pulse( 900,384);
		pulse( 904,812);
		pulse( 472,808);
		pulse( 472,384);
		pulse( 904,380);
		pulse( 900,388);
		pulse( 900,812);
		pulse( 468,388);
		pulse( 900,812);
		pulse( 468,816);
		pulse( 464,816);
		pulse( 468,388);
		pulse( 900,8004);	
}


void loop(void)
{
	readVal = digitalRead(buttonPin);
	if (readVal == HIGH)
	{
		SendCode1();
	}

}

