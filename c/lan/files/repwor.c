#include<stdio.h>
#include<string.h>

void main(int argc, char ** argv)
{
	if(argc!=4)
	{
		printf("Usage: a.out file search_word replace_word\n");
		return;
	}

	FILE*fp = fopen(argv[1],"r+");
	if(fp == 0)
	{
		printf("File not found\n");
		return;
	}



	char ch,s[50];
	int i=0,j,k,l,c=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char s1[c];
	while((ch=fgetc(fp))!=-1)
	{
		s[i++]=ch;	
		if(ch=='\n' || ch == ' ')
		{
			s[i-1]='\0';

			if((strcmp(s,argv[2]))==0)
			{
				//printf("%s\n",s);
				l=0;	
				while((ch=fgetc(fp))!=-1)
				{

					s1[l++]=ch;
				}
				s1[l]='\0';
				fseek(fp,-l,SEEK_END);
				if(strlen(s) >= strlen(argv[3]))
				{
					fseek(fp,-i,SEEK_CUR);
					fputs(argv[3],fp);

					if(strlen(s)!=strlen(argv[3]))
					{
						fputc(' ',fp);	
						fputs(s1,fp);	
						//printf("%s",s1);
						j=strlen(s)-strlen(argv[3]);
						k=j;
						while(j--)
							fputc(' ',fp);
						fseek(fp,-(l+k),SEEK_END);
					}
				}
				else
				{

					fseek(fp,-i,SEEK_CUR);


					fputs(argv[3],fp);
					fputc(' ',fp);
					fputs(s1,fp);
					fseek(fp,-l,SEEK_END);
				}

			}
			i=0;
		}
	}	
}
