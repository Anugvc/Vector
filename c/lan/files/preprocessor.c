/*Program to implement basic functions of preprocessor:
Single line comment removal
Multiline comment removal
Header file inclusion

input: ./a.out filename.c
output: file.i
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(int argc, char** argv)
{
int i;
	if(argc!=2)
	{
		printf("Enter input correctly\n");
		return;
	}

FILE * fp= fopen(argv[1],"r");

	if(!fp)
	{
		printf("File not fund\n");
		return;
	}	
FILE* fpnew = fopen("file.i","w");
///////////////////////////////////////////////////////////
char ch,ch1,ch2,ch3;

char s[30];

	


	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='/')
		{	ch1=fgetc(fp);
			if(ch1=='/')
			while((ch=fgetc(fp))!='\n');
			else if(ch1 == '*')
			{
			
			while((ch2=fgetc(fp))!=-1)
			{
				if(ch2=='*')
				{ch3 = fgetc(fp);
					if(ch3=='/')
					break;
				}
			}	
			}
		}

	
		else if(ch=='<')
		{i=0;
			ch1=fgetc(fp);
			while(ch1!='>')
			{
				s[i]=ch1;
				ch1=fgetc(fp);
				i++;
			}
			s[i]='\0';
			//printf("%s\n",s);
/////////////////////////////////////////////////////////////			
		if(i)
		{
			FILE * fptemp = fopen(s,"r");
			if(!fptemp)
			{
				printf("Error: Header file not found\n");
				break;
			}
			
			while((ch2=fgetc(fptemp))!=-1)
			{
				
				fputc(ch2,fpnew);
				
			}	
			
		}	
	
		}
		else
		{
			fputc(ch,fpnew);
		}

	}


////////////////////////////////////////////////////////////


}
