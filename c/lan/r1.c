#include<stdio.h>
void print(int);
void main()
{
int num;
 scanf("%d",&num);
print(num);

scanf("%d",&num);
print(num);
}
void print(int n)
{
static int pos=31;
if(pos>=0)
{
	printf("%d",n>>pos&1);
	pos--;
	print(n);
}


else
	pos=31;
}
