#include<iostream>
using namespace std;
int even(int a)
{
	int x = 0;
	x = a%2;
	if(x == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int sum = 0;
	int i = 0;
	int a[100] ={0};
	for( i = 0;i<100;i++)
	{
		cin>>a[i];
		if(a[i]<=0)
		{
			goto mark;
		}
		int m = even(a[i]);
		if(m == 0)
		{
			sum = sum+a[i];
		}
		
	}
	mark:
		cout<<sum<<endl;
	return 0;
}