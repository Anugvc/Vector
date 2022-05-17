#include<stdio.h>
void main()
{
int i,j,k,len1,len2,flag;
char s1[100],s2[100],temp;
printf("enter the srting 1\n");
scanf(" %[^\n]",s1);
printf("Enter the second string2\n");
scanf(" %[^\n]",s2);

for(i=0;s1[i];i++);
len1=i;
for(i=0;s2[i];i++);
len2=i;

	for(i=0;s1[i];i++)
	{
		if(!((s1[i]>='a'&& s1[i]<='z')||(s1[i]>='A'&& s1[i]<='Z')))
		{
			for(k=i;s1[k];k++)
				s1[k]=s1[k+1];
			i--;
		}
		
	}
 for(i=0;s2[i];i++)
          {
                  if(!((s2[i]>='a'&& s2[i]<='z')||(s2[i]>='A'&& s2[i]<='Z')))
                  {
                          for(k=i;s2[k];k++)
                                  s2[k]=s2[k+1];
                          i--;
                  }
  
          }

//printf("%s\n",s2);

for(i=0;s1[i];i++)
	{
	for(j=i+1;s1[j];j++)
	{
		if(s1[i]>s1[j])
		{
			temp=s1[i];
			s1[i]=s1[j];
			s1[j]=temp;
		}
	}
}


printf("%s\n",s1);

for(i=0;s2[i];i++)
          {
          for(j=i+1;s2[j];j++)
          {
                 if(s2[i]>s2[j])
                  {
                          temp=s2[i];
                          s2[i]=s2[j];
                         s2[j]=temp;
                  }
          }
  }
printf("%s\n",s2);
flag=0;
for(i=0;s1[i]&s2[i];i++)
{
	if(s1[i]!=s2[i])
	{
		flag=1;
		break;
	}
}
if(flag==0)
printf("Given strings are anagram\n");
else
printf("strings are not anagram\n");
}

