
inside file2.c::::::::::::::::::::;


#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;

fp=fopen("data","r");
char ch;
if(fp==0)
	printf("not present\n");
while((ch=fgetc(fp))!=-1)
{
	printf("%c",ch);	
}


}
