//wap to remove a specific line from a given text file
#include<stdio.h>
void main(int argc, char ** argv)
{
	if(argc!=3)
	{
		printf("Usage: ./a.out file_name line_to_remove\n");
		return;
	}
	FILE * fp =fopen(argv[1]);
	
	while((ch=fgetc(fp))!=-1)
	{
		
	}
		
}
