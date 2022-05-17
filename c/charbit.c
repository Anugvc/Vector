#include<stdio.h>
void main()
{

	char a;
	printf("Enter the characher\n");
	scanf("%c",&a);
	int i,j,pos;

	printf("Before swapping\n");
	for(i=7;i>=0;i--)
	{
		printf("%d",a>>i&1);
	}

	a=a^1<<5;

		
	printf("\n After togling 5th bit\n");
	printf("\na=%c\n",a);
	for(pos=7;pos>=0;pos--)
		printf("%d",a>>pos&1);

}
