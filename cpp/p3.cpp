#include<iostream>
using namespace std;

	class A
	{
		int a,b;
		public:
			void get_data()
			{
			if(a<0)
				cout<<"-"<<a<<"+"<<b<<endl;
			else
				cout<<a<<"+"<<b<<endl;
			}
			void set_data()
			{
				cout<<"Enter real"<<endl;
				cin>>a;
				cout<<"Enter imaginary"<<endl;
				cin>>b;
			}
	};
 main()
{

	A obj1,obj2;
	obj1.set_data();
	obj2.set_data();
	obj1.get_data();
	obj2.get_data();

}
