#include<stdio.h>
void main()
{

int i,j,k=0,s,len1,len2,l;

char s1[50],s2[50],r[100];

printf("Enter first string\n");

scanf("%s",s1);

printf("enter second string\n");

scanf("%s",s2);

for(i=0;s1[i];i++);

len1=i;

for(i=0;s2[i];i++);

len2=i;

if(len1>len2)
{
l=len1;
s=len2;
}
else
{
l=len2;
s=len1;
}



//printf("lrn1=%d len2=%d\n",len1,len2);
//l=len1>len2?len1:len2;
//for(i=0;i<l;i++)
//printf("%c",s1[i]);


for(i=0,j=0,k=0;i<len1,j<len2;)
{
if(s1[i])
{
r[k++]=s1[i];
i++;
printf("i=%d k=%d r[k]=%c\n",i,k,r[k]);
}
if(s2[j])
{
r[k++]=s2[j];
j++;
printf("j=%d k=%d r[k]=%c\n",j,k,r[k]);
}
}
//r[k+1]=0;

printf("%s ",r);



}
