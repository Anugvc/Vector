#include<reg51.h>

void delay_ms (unsigned int);

sbit LED = P2;

main()
{
	
while(1)
{
LED = 1;	
delay_ms(1000);
LED = 0;
	delay_ms(1000);
}
}



void delay_ms (unsigned int ms)
{
unsigned char i;
	for( ;ms>0;ms--)
{
  for(i=250;i>0;i--);
	for(i=247;i>0;i--);
 
}
}