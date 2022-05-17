#include<stdio.h>
void pal(int, int);
void main()
{
int n,n2;
printf("enter the upper limit\n");
scanf("%d",&n);
printf("enter the lower limit\n");
scanf("%d",&n2);
if(n<n2)
pal(n,n2);

}

void pal(int no1, int no2)
{
 int i,j,k,s=0;
	j=no1;
	while(j)
	{
	k=j%10;
	s=s*10+k;
	j=j/10;
	}
	if(s==no1)
	printf("%d ",s);

	if(no1>=no2)
		return;

	else
		pal(no1+1,no2);
}
