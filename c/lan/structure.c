#include<stdio.h>
#include<stdlib.h>
struct time
{
int hour;
int min;
int sec;
};

struct date
{
int d;
int m;
int year;
struct time t;
};


struct st
{
int rollno;
char name[4];
float mark;
struct date dob;
};


void main()
{
struct st s1;
printf("enter rollno\n");
scanf(" %d",&s1.rollno);
printf("enter mark\n");
scanf(" %f",&s1.mark);
printf("enter name\n");
scanf(" %s",s1.name);
printf("Enter time\n");
scanf(" %d %d %d",&s1.dob.t.hour,&s1.dob.t.min,&s1.dob.t.sec);
printf("enter dob\n");
scanf(" %d %d %d ",&s1.dob.d,&s1.dob.m,&s1.dob.year);

printf("time =%d:%d:%d\n",s1.dob.t.hour,s1.dob.t.min,s1.dob.t.sec);
printf("Date=%d-%d-%d\n",s1.dob.d,s1.dob.m,s1.dob.year);


}
