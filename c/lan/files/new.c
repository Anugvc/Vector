#include<stdio.h>
#include<string.h>

void main(int argc,char** argv)
{
	FILE * fp = fopen(argv[1],"r");
	

	int c;
	c=0;
	char s[100],r[200];
	char ch;
	while((ch = fgetc(fp))!=-1)
		c++ 
	
	while((fscanf(fp,"%s",s))!=-1)
	{
		printf("%s ",s);
	}
	
}
