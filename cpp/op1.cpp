#include<iostream>
using namespace std;

enum bixtest
{
	a,b,c
};
int main()
{
	int x= a , y = b, z = c;
	int &p=x, &q=y, &r=z;
	p = ++x;
	q = ++y;
	r = ++z;
	cout<< p << " "<< q<< " "<< r;
 
	return 0;

}
