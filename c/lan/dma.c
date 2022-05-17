#include<stdio.h>
#include<stdlib.h>

void main()
{
char **p;
int n,i;
printf("Enter the number of strings\n");
scanf("%d",&n);

p=malloc(sizeof(char)*n);

//if(p)
//	printf("p");
for(i=0;i<n;i++)
	p[i]=malloc(sizeof(char)*10);



for(i=0;i<n;i++)

	scanf("%s",p[i]);


for(i=0;i<n;i++)
	printf("%s\n",p[i]);
}
