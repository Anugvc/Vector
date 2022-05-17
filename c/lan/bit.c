#include<stdio.h>
void main()
{
int i,pos,num;
printf("enter the number\n");
scanf("%d",&num);
/*
printf("enter the position ti clear\n");
scanf("%d",&pos);

printf("before setting num=\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);

num=num&~(1<<32-pos);

printf("After setting num=\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("enter the position to set\n");
scanf("%d",&pos);

printf("Before setting pos=\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("after setting\n");

num=num^1<<pos;

for(i=31;i>=0;i--)
printf("%d",num>>i&1);
*/

printf("enter the pos to toggle\n");
scanf("%d",&pos);

printf("Before scanniing\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);


printf("After toggling\n");

num=num^1<<pos;
for(i=31;i>=0;i--)
printf("%d",num>>i&1);


}
