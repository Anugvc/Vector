#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc, char**argv)
{







FILE *fp = fopen(argv[1],"r");

char ch;
int c=0,c1=0;
while((ch=fgetc(fp))!=-1)
{
	c++;
	if(ch=='\n')
	{
	
	if(c>c1)
	{
		c1=c;
	}
		c=0;
	}
	
}
//printf("c1=%d\n",c1);
rewind(fp);
char s[c1];
char *s1;
int l;
while(fgets(s,c1,fp))
{
	if(s1=strstr(s,argv[2]))
	{	l=strlen(argv[2]);
		while(l--)
		printf("\033[31m%c\033[0m",*s1++);
		
		printf("%s\n",s1);
	}


}


}
