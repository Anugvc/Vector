#include<iostream>
using namespace std;

int def_val()
{
	int i;
	cin>>i;
	return i;

}

void get_data(int a, int b=def_val() )
{
	cout<<"a="<<a<<"b="<<b<<endl;

}

int main()
{
get_data(10);


}
