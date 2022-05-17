#include<reg51.h>
int io_read (unsigned char port,unsigned char pin,unsigned char val)
{
	unsigned char s;
	switch(port)
{	
	case 0: s=P0>>pin&1?1:0;break;
	case 1: s=P1>>pin&1?1:0;break;
	case 2: s=P2>>pin&1?1:0;break;
	case 3: s=P3>>pin&1?1:0;break;
}
return s;
}
int io_read (unsigned char port,unsigned char pin,unsigned char val)
{
	unsigned char s;
	switch(port)
{	
	case 0: s=P0>>pin&1?1:0;break;
	case 1: s=P1>>pin&1?1:0;break;
	case 2: s=P2>>pin&1?1:0;break;
	case 3: s=P3>>pin&1?1:0;break;
}
return s;
}