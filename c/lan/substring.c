#include<stdio.h>

void main()
{
int i,j,k,l,len,len1,flag,c=0;
char s[100],s1[50];
printf("Enter the string\n");
scanf(" %[^\n]",s);
printf("Enter the substring\n");
scanf(" %[^\n]",s1);
printf("\n%s\n",s);

for(i=0;s[i];i++);
len=i;

for(i=0;s1[i];i++)
len1=i;

for(i=0;s[i];i++)
{
	flag = 0;
	if(s[i]==s1[0])
	{

	if(len-i>=len1)
	{
	
		for(k=i+1,l=1;s1[l];k++,l++)
		{
		if(s[k]!=s1[l])
			break;
		}
		
		if(s1[l] == 0)
		c++;

	}	
	}
}
if(c>0)
printf("string %s found %d times\n",s1,c);
else
printf("string %s not found\n",s1);
}


