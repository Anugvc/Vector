#include<stdio.h>
int func1(int,int);
int func2(int , int);

void main()
{



printf("func1=%d, func2=%d \n",func1(3,8),func2(3,8));

}
int func1(int a, int b)
{
	if(a>b)
		return 0;
	return a+func1(a, b+1);

}

int func2(int a, int b)
{
	if (a>b)
		return 0;
	return b+func2(a+1,b);
i\\

}
