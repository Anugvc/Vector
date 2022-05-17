#include<stdio.h>
void prf(int);
void main()
{
int i,num;
printf("Enter the number \n");
scanf("%d",&num);
prf(num);

}

void prf(int num)
{
int i,j;
static int s=0,k=1;

if(k<num)
{
j=num%k?k:0;
s=s+return j+prf(k++);
}
if(s==num)
	printf("Perfect number\n");
else
	printf("Not perfect number\n");
}
