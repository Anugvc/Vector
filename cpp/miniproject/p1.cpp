#include<iostream>
#define max_size 5
using namespace std;

template <class Type>
class stack
{
	int top;
	Type stk[max_size];
	public:
	stack()
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
			cout<<"Popped:"<<stk[--top]<<endl;
	}
	void display_stack()
	{
		int index = top; 
		while(index>0)
		{
			cout<<stk[index];
			return;
		}
		if(index<=0)
			cout<<"Stack underflow"<<endl;

	}
		
	void stack_operation(int );


};

template <class Type>
void stack<Type> :: stack_operation(int op)
{
	Type val;
	if(op == 1)
	{	
		cout<<"Push"<<endl;
		cout<<"Enter value"<<endl;
		cin>>val;
		push(val);
		return;
	}
	else if(op == 2)
	{
		cout<<"Pop"<<endl;
		cout<<"Popping:"<<stk[top]<<endl;
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

int main()
{
	while(1)
	{
		ABC:
		int op;
		cout<<"1.int\n2.char\n3.float\n4.double\n5.string\n6.exit\n";
		cin>>op;
		switch(op)
		{
			
			case 1:cout<<"int stack application ready to use"<<endl;
				while(1)
				{
					int op1;
					cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
					cin>>op1;
					if(op1>=1 && op1<=4)
					{
						if(op1 == 4)
							goto ABC;
						stack <int> stk;
						stk.stack_operation(op1);
					}

				}
			
/*			case 2:cout<<"char stack application ready to use"<<endl;
				while(1)
				{
					int op1;
					cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
					cin>>op1;
					if(op>=1 && op<=4)
					{
						if(op == 4)
							goto ABC;
						stack<char>stk;
						stk.stack_operation(op);
					}

				}
			case 3:cout<<"double stack application ready to use"<<endl;
				while(1)
				{
					int op1;
					cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
					cin>>op1;
					if(op>=1 && op<=4)
					{
						if(op == 4)
							goto ABC;
						stack<double>stk;
						stk.stack_operation(op);
					}

				}
			case 4:cout<<"float stack application ready to use"<<endl;
				while(1)
				{
					int op1;
					cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
					cin>>op1;
					if(op>=1 && op<=4)
					{
						if(op == 4)
							goto ABC;
						stack<float>stk;
						stk.stack_operation(op);
					}

				}*/
			
			default:break;
	}

}
}
