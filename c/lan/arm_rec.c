 #include<stdio.h>
int rec(int);
static int g;
void main()
{
int n,k;
scanf("%d",&n);
g=n;
k=rec(n);
if(k==0)
printf("no \n");
else
printf("yes \n");
}

int rec(int n)
{
static int r,s;
if(n)
{
r= n%10;
s=s +  r*r*r;
rec(n/10);
}
else
{
if(s==g)
return 1;
else
return 0;
}
}
