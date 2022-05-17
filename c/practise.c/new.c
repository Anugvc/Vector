#include<stdio.h>
void func(int a, static int b);
void main()
{
	func(1,2);
	func(3,4);


}
void func(int a, static int b)
{
	a++;
	b++;
	printf("%d %d \n",a,b);
}
