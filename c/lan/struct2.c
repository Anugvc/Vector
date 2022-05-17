#include<stdio.h>
#include<stdlib.h>

struct st 
{
int roll_no;
char* name;
float mark;

};

void main()
{

struct st s;
struct st  *ptr=&s;
ptr=(struct st*)malloc(sizeof(struct st));
ptr->name = (char*) malloc(10);

printf("enter the name\n");
scanf("%s",ptr->name);

printf("Name =%s\n",ptr->name);


}
