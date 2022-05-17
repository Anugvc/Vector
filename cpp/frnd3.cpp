#include<iostream>
using namespace std;
class B;
class A
{
int a;

public:
	void set_data()
	{
		cin>>a;
	}

	void  get_data(B);

};

class B
{
int b;

public:
	friend void A::get_data(B);

};


void A::get_data(B obj)
{
	cout<<obj.b;

}


int main()
{
	A a1;
	B b1;
	a1.set_data();
	a1.get_data();

}
