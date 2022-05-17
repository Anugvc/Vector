

inside main program::::

#include<file2.c>


void main()
{
///FILE * fp;
//fp = fopen("data", "w");
char ch;
/*if(fp==0)
{
	printf("file not present\n");


}
*/
scanf(" %c",&ch);
fputc(ch,fp);

rewind(fp);
ch=fgetc(fp);
	printf("c=%c",ch);

}
