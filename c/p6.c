#include<stdio.h>
void main()
{

char s[5][10];
char *p[5];
int ele,i,j;
ele = sizeof(s)/sizeof(s[0]);
printf("Enter the elements\n");
for(i=0;i<ele;i++)
{
p[i]=s[i];
}

for(i=0;i<5;i++)
p[i]=s[i];
printf("&s=%d,&s+1=%d\n&p=%d, &p+1=%d\n",&s,&s+1,&p,&p+1);

}
