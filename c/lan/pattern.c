#include<stdio.h>
void main()
{
/*
int i,j,k;
for(i=-5;i<6;i++)
{

	if(i==0)
	continue;
	
	for(k=5-(i>=0?i:-i);k>=0 ;k--)
	printf(" ");
	
	for(j=0 ;j<(i>=0?i:-i) ;j++)
	{
	printf("* ");
	printf("%d",i);
	}
	printf("\n");
}*/
int i,j,k=0;
char ch=96;
for(i=0;i<7;i++)
{

	for(j=0;j<7-i;j++)
		printf(" ");
	for(j=0;j<=i;j++)
	{
		
		if(j==0||j==i)
		printf("%d ",k++);
		else
		printf("%c ",++ch);
	}
	printf("\n");

}



}
