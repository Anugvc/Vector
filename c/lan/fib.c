#include<stdio.h>
void fib(int );
void main()
{

int i,n;
printf("Enter the limit\n");
scanf("%d",&n);
fib(n);

}

void fib(int num)
{
	static int c=1,s=0,a=1,b=0;
	if(s==0)
	printf("%d ",s);
	 if(c<num)
	{
		s=a+b;
		a=b;
		b=s;
		printf("%d ",s);
		c++;
		fib(num);
	}
	else
		return;

}
