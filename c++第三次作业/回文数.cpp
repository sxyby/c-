int reverse(int a)
{
	int num = 0;

	while(a>0)
	{
	num = num*10+a%10;
	a= a/10;
	}
	return num;

}
#include<iostream>
using namespace std;
int main()
{
	int palin = 0,N=  0;
	int count = 0;
	cin>>N;
	int n = 0,k = 0;
	for(int i = 0;i<N;i++)
	{
		cin>>n>>k;
		while(count<k)
		{
			
			if(n == reverse(n))
			{
				palin = reverse(n);
				count++;
				
				cout<<palin<<endl;
			}
			n++;
		}
	}
	return 0 ;
}