
#include<stdio.h>

void main()
{

const int  p[4]={1,2,3,4};
int *ptr;
ptr=p+3;
*ptr=5;
printf("%d",p[3]);
}
