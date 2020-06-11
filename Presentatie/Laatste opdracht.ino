#include <Servo.h>  

Servo servo1; 


void setup()
{
	
	servo1.attach(9, 900, 2100); //Verbind het aan 09 van de servo
	
}


void loop()
{
	int position;
	
	
	servo1.write(90);  //laat het gaan naar 90 
	
	delay(1000);       //Dit laat het 1000 ticks wachten voordat de volgende code word gelezen  
	
	servo1.write(180);   //rinse and repeat van de eerdere code
	
	delay(1000);         
	
	servo1.write(0);     
	
	delay(1000);        
	
	servo1.write(50);     
	
	delay(1000);        
	
	servo1.write(10);     
	
	delay(1000);        	
}