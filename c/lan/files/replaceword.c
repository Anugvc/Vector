#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char ** argv)
{
	if(argc!= 4)
	{
		printf("Usage: a.out filename search_word replace_word\n");
		return;
	}

	FILE* fp = fopen(argv[1], "r");
	if(!fp)
	{
		printf("File not found\n");
		return;
	}
	
	int i,c;
	char *s,*r;
	char ch;
	c=0;
	while((ch=fgetc(fp))!=-1)
		c++;

	c=c+strlen(argv[3]+2);
	rewind(fp);
	r=malloc(sizeof(char)*c);
	s=malloc(sizeof(char)*c);		
	
	while((fscanf(fp,"%s",s))!=-1)
	{
		ch=fgetc(fp);
		//printf("%s",s);
		if(strcmp(s,argv[2])==0)
		{
			strcat(r,argv[3]);
	
		}
		else
		{
			strcat(r,s);
		}
		strncat(r,&ch,1);
	}
	//printf("********%s*********",r);
	fclose(fp);
	fp = fopen(argv[1],"w");
	fputs(r,fp);
}
