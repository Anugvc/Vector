#include<stdio.h>
#include<string.h>
void main(int argc, char**argv)
{
if(argc!=4)
{
	printf("Usage: a.out filename string_to_be_replaced string_input\n");
	return;
}
FILE *fp = fopen(argv[1],"r+");

if(fp==0)
{
	printf("File not found\n");
	return;

}

int c=0,c1=0,i,j,flag;
char ch,s[30];


char t[(strlen(argv[3])>strlen(argv[2]))?strlen(argv[3]):strlen(argv[2])];

i=0;
flag=0;
while((ch=fgetc(fp))!=-1)
{
	t[i++]=ch;
	
	if(ch=='\n')
	{	
		t[i-1]='\0';
		//printf("%s\n",t);
		//printf("%d\n",strcmp(t,argv[2]));
		if((strcmp(t,argv[2]))==0)
		{	flag=1;
			//printf("%s\n",t);
			fseek(fp,-i,SEEK_CUR);
			if(strlen(t)>strlen(argv[3]))
			{
			//printf("Inside if\n");
			fputs(argv[3],fp);
			for(j=strlen(argv[3]) ;j<strlen(t);j++)
				fputc('\0',fp);
			fputc('\n',fp);	
			}
			else
			{
			//	printf("Inside else: t=%s ,r=%s\n",t,argv[3]);
				fputs(argv[3],fp);
				
				fputc('\n',fp);
			}
			
			
		}
		
		i=0;
	}

}
if(flag == 0)
{
	printf("Search string not found in the file\n");
}

}

