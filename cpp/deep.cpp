#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *s;

	public:

	A(const char *p)
	{	
		s = new char[(strlen(p)+1)]; 
		strcpy(s,p);
	}
	
	A(A& temp)
	{
		s= new char[strlen(temp.s+1)];
		strcpy(s,temp.s);
	}
	
	void modify()
	{
		s[0] = 's';
	}
	void get_data()
	{
		cout<<s<<endl;

	}
	

};

int main()
{
	A s1("vector"), s2(s1);
	s1.get_data();
	s2.get_data();
	s1.modify();
	s1.get_data();
	s2.get_data();


	
}
