

#include<stdio.h>
#include<stdio.h>
void main(int argc, char** argv)
void main(int argc, char** argv)
{
{
int i,l1,l2,c1,c2,c=0;
int i,l1,l2,c1,c2,c=0;


FILE * fp1=fopen(argv[1],"r");
FILE * fp1=fopen(argv[1],"r");
FILE * fp2=fopen(argv[2],"r");
FILE * fp2=fopen(argv[2],"r");
FILE* fp3=fopen(argv[3],"w");
FILE* fp3=fopen(argv[3],"w");






char s1[100],s2[100];
char s1[100],s2[100];
while(fgets(s1,100,fp1))
while(fgets(s1,100,fp1))
{
{
	if(fgets(s2,100,fp2))
	if(fgets(s2,100,fp2))
	{
	{
		fputs(s1,fp3);
		fputs(s1,fp3);
		fputs(s2,fp3);
		fputs(s2,fp3);
	}
	}


}
}




}
}



void main()
{
printf("%d\n",macro);

}

