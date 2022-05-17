#include<stdio.h>
struct st 
{
int rollno;
char name[20];
int mark[3];


}s[10];
void main()
{
int i;


for(i=0;i<5;i++)
{
printf("enter roll no\n");
scanf(" %d",&s[i].rollno);
printf("Enter name of student\n");
scanf(" %s",s[i].name);

printf("Enter mark of physics\n");
scanf("%d",&s[i].mark[0]);
printf("Chemistry\n");
scanf("%d",&s[i].mark[1]);
printf("maths\n");
scanf("%d",&s[i].mark[2]);



}

for(i=0;i<5;i++)
{

printf("name:%s\nRollno:%d\nMarks:\n maths:%d\nphysics:%d\nChemistry:%d\n",s[i].name,s[i].rollno,s[i].mark[0],s[i].mark[1],s[i].mark[2]);

}

}
