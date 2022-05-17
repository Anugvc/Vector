#include<stdio.h>
#include<stdlib.h>

typedef struct ST
{
int rollno;
struct ST *next;


}st;

void main()
{
int n;
//printf("Enter the options\n 1 for scan 2 for print 3 for exit");
//scanf("%d",&n);
st * headptr = 0;


//printf("Enter the options\n 1 for scan 2 for print 3 for exit");
while(1)
{

printf("Enter the options\n 1 for scan 2 for print 3 for exit\n");
scanf("%d",&n);
switch(n)
{

case 1:
{

st *new;
new = (st *)malloc(sizeof(st)); 
scanf("%d",&new->rollno);

new->next = headptr;
headptr=new;
break;
}
////////////////print data//////////////////////

case 2:
{
st * ptr = headptr;
while(ptr)
{
	printf("rollno=%d\n",ptr->rollno);
	ptr=ptr->next;
}
break;
}
case 3:
	exit(0);

default:
	printf("Wrong choice\n");
	break;

			}
	}	
}
