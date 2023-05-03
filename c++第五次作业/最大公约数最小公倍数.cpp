#include<iostream>
using namespace std;
int gcd( int x,int y)
{
	int gcd = y;
	while(x%y!=0)
	{
		gcd = x%y;
		x = y;
		y = gcd;	
	}
	return gcd;
}
int lcm (int m,int n)
{
	int lcm = 0;
	lcm = m*n/gcd(m,n);
	return lcm;
}
int main()
{
	int a,b;
	
	cin>>a>>b;
	int x = a>b ?gcd(a,b):gcd(b,a);
	cout<<x<<endl;
	cout<<lcm(a,b);
	return 0;
}