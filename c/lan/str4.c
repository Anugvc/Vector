#include<stdio.h>
void main()
{
char s[200],t;
int  n,k,i,j,l,m;
printf("Enter the string\n");
scanf("%[^\n]",s);
printf("Enter the key\n");
scanf("%d",&k);

for(i=0,j=1;s[i];i++)
{
	if(!s[i+1])
		break;
	
	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	{
		if(j%k==0)
		{	for(m=i+1;s[m];m++)
			if((s[m]>='a'&& s[m]<='z')||(s[m]>='A'&& s[m]<='Z'))
				break;
			t=s[i];
			s[i]=s[m];
			s[m]=t;
			
		}
	j++;
	}
	
}
printf("%s\n",s);
}
