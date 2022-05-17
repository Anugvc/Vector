#include<stdio.h>
void main(int argc, char**argv)
{
int i,c,c1;

if(argc!=3)
{
	printf("Usage: grep file_name string");
	return;
}

FILE* fp=fopen(argv[1],"r");

if(fp==0)
	printf("File not present\n");

c=0,c1=0;
char ch;
while((ch=fgetc(fp))!=-1)
{
	if(ch=='\n')
	{
		if(c>c1)
		{
		c1=c;
		}
	}
	c=0;
}

printf("c1=%d\n",c1);


}
