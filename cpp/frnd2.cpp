//11.  Write a C++ Program to declare 3 classes. Declare private integers array as data members in each class. Perform addition of two data member arrays into array of third class using friend function.
#include<iostream>
using namespace std;

class A;
class B;

class  A
{
	int a[5];
	public:
	friend void C::add(A,B);
	void set_data()
	{
		cout<<"Enter array 1 elements"<<endl;
		int i;
		for(i=0;i<5;i++)
			cin>>a[i];
	}
	
};



class  B
{
	int b[5];
	public:
	friend void C::add(A,B);
	void set_data()
	{
		cout<<"Enter array 2 elements"<<endl;
		int i;
		for(i=0;i<5;i++)
			cin>>b[i];
	}
};	

class C
{
	int c[5],i;
	public:
	
        void add(A,B);
      

	void get_data()
	{
	for(i=0;i<5;i++)
		cout<<c[i]<<endl;
	}
};	
void C::add(A a1, B b1)
{
	for(int i=0;i<5;i++)
		c[i]=a1.a[i]+b1.b[i];
}

int main()
{

	A a1;
	B b1;
	C c1;
	
	int i;

	a1.set_data();
	b1.set_data();
	
	c2.add(a1, b1, c1); 
	cout<<"after adding"<<endl;
	c1.get_data();


}

       
/*void add( A aobj, B bobj, C &cobj)
{
	int i;
	for(i=0;i<5;i++)
		cobj.c[i]=aobj.a[i]+bobj.b[i];


}*/
