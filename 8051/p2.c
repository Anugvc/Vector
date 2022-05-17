#include"delay.h"

sbit sw = P1^0;



main()
{
	unsigned char count=0;
	while(1)
	{
		if(sw==0)
		{
			while(sw==0);
			if(sw==1)
			{
				count++;
			}
			if(count == 15)
				count = -1;
			P2=0xf;
			P2 &= ~count; 
		}
	}
}