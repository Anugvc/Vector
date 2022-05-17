#include<stdio.h>
void main(){
int a,b;
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
printf("Before swapping: a=%d,b=%d\n",a,b);
a=a+b-(b=a);
printf("after swapping: a=%d, b=%d\n",a,b);
printf("using * and /, swapping again\n");
a=a*b/(b=a);
printf("a=%d , b=%d \n",a,b);

}

