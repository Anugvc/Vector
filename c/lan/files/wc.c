//#include<stdio.h>

#include<merge.c>


//anugrah anuahgjha



void main(int argc , char ** argv)
{
	int c=0,l=0,w=0;
	FILE * fp = fopen(argv[1],"r");
	
	char ch;
	while((ch=fgetc(fp))!=-1)
	{c++;
		if(ch=='\n')
			l++;
		if(ch==' ' || ch == '\n')
			w++;
	
	}
/*	printf("size=%d, word=%d, line= %d\n",c,w,l);
*/
}
