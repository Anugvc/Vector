#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc, char ** argv)
{

	FILE * fp1;
	FILE *fp2;
	FILE *fp3;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w");

	if(fp1==0 || fp2 == 0)
	{
		printf("File 1 or file 2 not found\n");
		return;
	}
	char ch;
	int l1=0,l2=0,c=0,c1=0,c2=0,lim,i;
	while((ch=fgetc(fp1))!=-1)
	{	c++;
		if(ch == '\n')
		{
			if(c>c1)
				c1=c;
		c=0;	
		l1++;
		}
	}
	c=0;
	while((ch=fgetc(fp2))!=-1)
	{
		c++;
		if(ch == '\n')
		{
			if(c>c2)
				c2=c;
		c=0;
		l2++;
		}
	
	}

	printf("c1=%d,c2=%d\n",c1,c2);

	rewind(fp1);
	rewind(fp2);
	//char*p = malloc(sizeof(char)*(c1+c2+2));
	//char *s1= malloc(sizeof(char)*(c2+c1));
	
char s1[100],s2[100];	

	lim=l1>l2?l2:l1;	
	printf("lim=%d\n",lim);
	for(i=0;i<lim;i++)
	{
		fgets(s1,100,fp1);
		fgets(s2,100,fp2);
	//	printf(" %s\n*******************%s\n",s1,s2);
		//strcat(p,s1);
		//printf("%s\n",s1);
		fputs(s1,fp3);
		fseek(fp3,-1,SEEK_CUR);
		fputs(s2,fp3);
	}

	/*if(l1>l2)
	{	
		while(fgets(p,c1,fp1))
		fputs(p,fp3);
	}
	else if(l1<l2)
	{
		while(fgets(p,c2,fp2))
		fputs(p,fp3);
	}*/
		
}

