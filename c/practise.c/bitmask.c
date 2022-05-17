#include<stdio.h>
void main(){

unsigned int i=15,j,k,n1,n2;
unsigned int pos;
j=(i&0x000000FF)<<24;
k=(i&0xFF000000)>>24;
n1=i&0x00ffff00;
i=n1|j|k;

//k<<pos;
//i=i&(j|k);
for(pos=31;pos>=0;pos--)
{
printf("%d",i>>pos&1);
if(pos%4==0)
printf(" ");
}
printf("\n");

}

