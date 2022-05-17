#include<stdio.h>
void reverse(int);

void main(){
int a;
printf("enter anu number");
scanf("%d",&a);

reverse(a);
}

void reverse(int a)
{
int c=0,d;
while(a>0){
d=a%10;
c=c*10+d;
a=a/10;
}
printf("%d",c);
}
