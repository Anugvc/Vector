#include<stdio.h>

void func1(void);

void func2(void);

int main(void)

{
//extern int x;
	func1();	

	func2();
	printf("x=%d\n",x);
	return 0;

}

void func1(void)

{      

	extern int x;

	x++; 

	printf("%d\t",x);

}

int x=89;

void func2(void)

{       

	x++; 

	printf("%d\n",x);

}
