#include<iostream>
using namespace std;
void swap(int&, int&);
void swap(float&, float&);
void swap(char&, char&);

int main()
{
	int a,b;
	char c,d;
	float e,f;

	cout<<"enter integer a and b"<<endl;
	cin>>a>>b;
	cout<<"Enter two float c and d"<<endl;
	cin>>e>>f;
	cout<<"Enter character e and f"<<endl;
	cin>>c>>d;
	swap(a,b);
	swap(c,d);
	swap(e,f);
	cout<<"After swapping"<<endl<<"a= "<<a<<" b="<<b<<endl<<"e= "<<e<<" f="<<f<<endl<<"c= "<<c<<" d="<<d<<endl;
}

	void swap(int&a, int&b)
	{
		int z=a;
		a=b;
		b=z;
	}	

	void swap(char&a, char&b)
	{
		char z=a;
		a=b;
		b=z;
	}	

	void swap(float&a, float&b)
	{
		float z=a;
		a=b;
		b=z;
		
	}	
