#include<stdio.h>
char* strcp(char*, int);

void main()
{
int i,ele;

printf("enter the size\n");
scanf("%d",&ele);
char s[10];
printf("enter characters\n");
for(i=0;i<ele;i++)
scanf(" %c",&s[i]);

puts(strcp(s,ele));
}

char* strcp(char* str, int size)
{
int i,j,k;

for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
	if(str[i]==str[j])
	{
		for(k=j;k<size;k++)
		{
			str[k]=str[k+1];
			
		}
		size--;
		j--;
	}

}

return str;
}

}
