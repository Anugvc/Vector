//WAP to convert lower case to upper and upper to lower in a file
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char ** argv)
{


FILE* fp=fopen(argv[1],"r+");

if(fp==0)
{
	printf("File not found\n");
	return;

}

char ch;
while((ch=fgetc(fp))!=-1)
{
//printf("%c\n",ch);
  if(ch>='A' && ch<= 'Z')
  {
  ch=ch+32;
  printf("%c\n",ch);
  fseek(fp,-1,SEEK_END);
  fputc(ch,fp);
 }
else if(ch>='a' && ch<='z')
{
	ch = ch-32;
	fseek(fp,-1,SEEK_END);
	fputc(ch,fp);
}


}


}
