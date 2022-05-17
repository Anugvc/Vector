#include<stdio.h>
void strev(char*,int);
void main()
{
int i,len;
char s[10];
printf("Enter the string\n");
scanf(" %s",s);
for(i=0;s[i];i++);
len=i-1;

printf("i=%dlen=\n",i,len);
strev(s,len);
printf("%s\n",s);


}
void strev(char* str, int l)
{
static int i;

char temp;
temp=str[i];
str[i]=str[l];
str[l]=temp;
i++;
if(i<l)
{
strev(str,--l);
}
else
return;

}

