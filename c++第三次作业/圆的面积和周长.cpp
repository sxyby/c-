const double pai = 3.14;
double square(double r)
{
	
	double s =0;
	s= pai*r*r;
	return s;
}
double length(double r)
{
	double l =0;
	l = pai*r*2;
	return l;
}
#include<iostream>
using namespace std;
int main()
{
	double r = 0;
	cin>>r;
	cout<<"直径等于"<<2*r<<endl;
	cout<<"面积等于"<<square(r)<<endl;
	cout<<"周长等于"<<length(r)<<endl;
}