#include<stdio.h>
void main()
{
int i,w1,w2,len1,len2,d;
char s1[100],s2[100],r[100];
printf("enter the number\n");
scanf("%[^\n]",s1);
printf("enter the second string\n");
scanf(" %[^\n]",s2);

for(i=1;s2[i];i++);
len1=i;
for(i=1;i<s2[i];i++);
len2=i;

for(i=0;s1[i];i++)
{
if(s1[i]==' ')
{
w1=i;
break;
}
}
for(i=0;s2[i];i++)
{
if(s2[i]==' ')
{
w2=i;
break;
}
}

printf("w1=%d w2=%d\n",w1,w2);
if(w1>w2)
{
d=w1-w2+1;


for(i=len2;i>w2;i--)
{
s2[i+d]=s2[i+1];

}
for(i=0;i<w1;i++)
s2[i]=s1[i];
printf("%s\n",s2);
}
else if(w2>w1)
{
d=w2-w1;
for(i=w2;i<len1;i++)
{
s2[i-d+1]=s2[i+1];
}
for(i=0;i<=w1;i++)
{
s2[i]=s1[i];
}
printf("%s\n",s2);
}
else{
for(i=0;i<=w1;i++)
s2[i]=s1[i];
printf("%s\n",s2);
}
}
