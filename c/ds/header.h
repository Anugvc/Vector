#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll_no;
	char name[20];
	float mark;
	struct student * next;

}SLL;

void add_data(SLL **);
void print_data(SLL *);
void delete_node(SLL **);
int count_node(SLL *);
void add_end();
void add_middle();
void add_node();

