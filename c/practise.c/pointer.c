#include<stdio.h>
#include<string.h>


int str_rev();
int str_rev1();


void main()
{
char s1[30],ch;
int i,j;
printf("enter the string\n");
scanf("%s",s1);
puts(s1);

for(i=0;s1[i];i++);

for(i=i-1,j=0;i>j;i--,j++)
{
ch=s1[i];
s1[i]=s1[j];
s1[j]=ch;
}

puts(s1);

}

