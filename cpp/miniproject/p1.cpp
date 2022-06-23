#include<iostream>
#define max_size 5
using namespace std;

template <class Type>
class Stack
{
	Type stk[max_size];
	public:
	static int top;
	Stack()
	{
		
		top = -1;
	}
	
	void push(Type val)
	{
		if(top<max_size -1)
			stk[++top]=val;
		else
			cout<<"Stack overflow"<<endl;

	}
	void pop()
	{
		if(top<0)
			cout<<"Stack underflow"<<endl;
		else
			cout<<"Popped:"<<stk[top--]<<endl;
	}
	void display_stack()
	{
		int index = top;
	        
		if(index<0)
			cout<<"Stack underflow"<<endl;
		while(index>=0)
		{
			cout<<stk[index--]<<endl;
		}

	}
		
	void stack_operation(int );


};

template<class Type>
int Stack<Type>::top;

template <class Type>
void Stack<Type> :: stack_operation(int op)
{
	 
	Type val;
	

	if(op == 1)
	{	
		cout<<"Push"<<endl;
		cout<<"Enter value"<<endl;
		cin>>val;
		push(val);
		cout<<"top="<<top<<endl;
		return;
	}
	else if(op == 2)
	{
		
		cout<<"Popping:"<<stk[top]<<" ..."<<endl;
		pop();
		cout<<"Popped"<<endl;
		return;
	}
	else if(op == 3)
	{
		display_stack();
		return;
	}
}

void switch_fun(int op)
{
	int op1;
	switch (op)
	{
		case 1:
				{
				Stack <int> stk1;
				while(1)
				{
				cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
				cin>>op1;
				if(op1 > 0 && op1 < 4)
					stk1.stack_operation(op1);
				if(op1==4)
					return;
				}
				}
				break;

		case 2:
			{
			Stack <char> stk2;
			while(1)
			{
			cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
			cin>>op1;
			if(op1 > 0 && op1 < 4)
				stk2.stack_operation(op1);
			if(op1==4)
				return;
			}
			}
			break;
		case 3:
				{
				Stack <float> stk3;
				while(1)
				{
				cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
				cin>>op1;
				if(op1 > 0 && op1 < 4)
					stk3.stack_operation(op1);
				if(op1==4)
					return;
				}
				}
				break;
		case 4:
				{
				Stack <double> stk4;
				while(1)
				{
				cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
				cin>>op1;
				if(op1 > 0 && op1 < 4)
					stk4.stack_operation(op1);
				if(op1==4)
					return;
				}
				}
				break;
		case 5:
				{
				Stack <string> stk5;
				while(1)
				{
				cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
				cin>>op1;
				if(op1 > 0 && op1 < 4)
					stk5.stack_operation(op1);
				if(op1==4)
					return;
				}
				}
				break;
		default:break;
		
	}
	return;

}


int main()
{
	while(1)
	{
		ABC:
		int op;
		cout<<"1.int\n2.char\n3.float\n4.double\n5.string\n6.exit\n";
		cin>>op;
		char a[][10] = {"start","int","char","float","double","string"};
		
		if(op == 6)
			exit(0);
		
		cout<<a[op]<<" stack operation ready to use"<<endl;
		switch_fun(op);
		

		
}
}


