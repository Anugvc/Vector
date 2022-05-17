//9. Write a C++ Program to exchange values of two variables between two classes using friend function.
#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	friend void exchange(A&,B&);
	friend int main();	
	public:
		void set_data()
		{
			cout<<"Enter a"<<endl;
			cin>>a;
		}
};

class B
{
	int b;
	friend void exchange(A&,B&);
	friend int main();

	public:
		void set_data()
		{
			cout<<"Enter b"<<endl;
			cin>>b;
			
		}
};

int main()
{
	A a;
	B b;
	a.set_data();
	b.set_data();	
	cout<<"Before exchange: a="<<a.a<<" b="<<b.b<<endl;

	exchange(a, b);
	
			
	cout<<"after exchange: a="<<a.a<<" b="<<b.b<<endl;

}

void exchange(A &a, B &b)
{
	int temp;
	temp = a.a;
	a.a = b.b;
	b.b = temp;

}
