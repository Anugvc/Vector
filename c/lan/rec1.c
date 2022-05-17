#include<stdio.h>
void amstrong(int);
static int nu;
void main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
nu=n;
amstrong(n);

}

void amstrong(int num)
{
	int i,j,k;
	
	static int s=0;
	
	j=k%10;
	s=s+j*j*j;
	k=k/10;

	if(k>0)
		amstrong(k);
	else
	{
		printf("s=%d nu=%d\n");
		if(s==nu)
			printf("Amstrong\n");
		
		else
			printf("Not amstrong\n");
	}
	

}
