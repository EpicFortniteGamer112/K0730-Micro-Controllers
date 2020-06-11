#include <Servo.h>  

Servo servo1; 


void setup()
{
	
	servo1.attach(9, 900, 2100);
	
}


void loop()
{
	int position;
	
	
	servo1.write(90);   
	
	delay(1000);         
	
	servo1.write(180);   
	
	delay(1000);         
	
	servo1.write(0);     
	
	delay(1000);        
	
	servo1.write(50);     
	
	delay(1000);        
	
	servo1.write(10);     
	
	delay(1000);        	
}