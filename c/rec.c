#include<stdio.h>

void evod(int *,int);
void main()
{

int i, arr[10],ele;
ele = sizeof(arr)/sizeof(arr[1]);


printf("enter the array values\n");

for( i=0;i<10;i++)
	scanf("%d",&arr[i]);

evod(arr,ele);

}

void evod(int *a,int e)
{
static int i, s=0,p=1;
if(i<e){

	if(*a%2 == 0)
	{
		s=s+*a;
		
		evod(a+1,e);
		i++;
	}
	else
	{
		p=p**a;
		
		evod(a+1,e);
		i++;
	}
}
else
	printf("even sum =%d, odd product=%d",s,p);

}
