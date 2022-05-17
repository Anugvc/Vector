#include"header.h"


SLL * headptr=0;


void main()
{

int op,tmp;


while(1)
{
printf("Choose option\n1)Enter elements\n2)print data\n3)Add node at end\n4)Add items in middle\n13)delete node\n18)Exit\n");

//scanf("%d",&op);

if(scanf("%d", &tmp)==0)
{
	getchar();
}
else
	op = tmp;

//printf("**********%d*********\n",r);

switch(op)
{
case 1: add_data(&headptr);break;

case 2: print_data(headptr);break;

case 3: add_end();break;

case 4: add_middle(); break;

case 5:  add_node();break;

case 6: break;

case 7: break;

case 8: break;

case 9: break;

case 10: break;

case 11: break;

case 12: break;
	
case 13: delete_node(&headptr); break;

case 14: break;

case 15: break;
 
case 16: break;

case 17: break;

case 18: exit(0);break;

default: printf("Wrong option - enter the correct option\n\n\n");break;

}


}


}

void add_data(SLL **ptr)
{
	printf("Enter the elements\n");
	SLL * new;
	new = (SLL*)malloc(sizeof(SLL));
	scanf("%d %s %f",&new->roll_no,new->name,&new->mark);
	new->next = *ptr;
	*ptr =new;


}
void print_data(SLL *ptr)
{
	if(ptr==0)
         {
           printf("no record found\n");
           return;
         }
	while(ptr)
	{
		//ptr=ptr->next;
		printf("Roll no:%d\n Name:%s\n Mark %f\n**************************\n",ptr->roll_no,ptr->name,ptr->mark);
                ptr=ptr->next;
	}


}

int count_node(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
}

void add_end()
{
	SLL *head = headptr;
	SLL * new;
		printf("Enter the roll no, name and mark \n");
		new = (SLL*)malloc(sizeof(SLL));
		scanf("%d %s %f",&new->roll_no,new->name,&new->mark);
		new->next = 0;
	if(headptr == 0)
	{		
		headptr=new;	
	}
	while(head->next)
	{
		
		if(head->next == 0)
		{	
			head->next = new;
			break;
		}
		head = head->next;
	}

}


//headptr->nodeA->nodeB->nodeC->0
void delete_node(SLL **ptr)
{
	
	SLL *del = *ptr;
	SLL *temp;
	int  r;
	printf("Enter the rollno to delete\n");
	scanf("%d",&r);
	

	while(del->next)
	{	
		if(del->next->roll_no == r)
		{
			temp = del->next;
			del->next = temp->next;
			free(temp);
		}
		del = del->next;
	}
} 


void add_middle()
{
	SLL *head ,*new;
	
	printf("Enter the roll no, name and mark\n");
	new = (SLL*)malloc(sizeof(SLL));
	scanf("%d %s %f",&new->roll_no,new->name,&new->mark);
	new->next  = 0;
	head = headptr;
	while(head)
	{
		if(head->roll_no == new->roll_no)
		{
			printf("Enter a different rollno\n");
			scanf("%d",&new->roll_no);
			head = headptr;
		}
		else
			head = head->next;
	}
	if(head == 0 || head->roll_no > new->roll_no)
	{
	
		new->next = headptr;
		headptr = new;
		
		return;
	}
	
	head = headptr;
	while(head->next && head->next->roll_no < new->roll_no )
		head = head->next;
	
	new->next = head->next;
	head->next = new;

}

void add_node()
{
	SLL *head = headptr;
	SLL *new; 
	int r;
	printf("Enter the roll no, name and mark\n");
	new = (SLL*)malloc(sizeof(SLL));
	scanf("%d %s %f",&new->roll_no,new->name,&new->mark);
	printf("Enter the rollno of the node after which new node is to be inserted\n");
	scanf("%d",&r);
	
	
	if(head->roll_no == r)
	{
		new->next = head->next;
		headptr = new;
		return;
	}
	while(head)
	{
		if(head->roll_no == r)
		{
			new->next = head->next;
			head = new;
			return;
		}
		head = head->next;
	}
	if(head->next == 0)
	{
		printf("roll_no not found\n");
	}	

}
