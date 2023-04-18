double s(double a)
{
	double square = a*a;
	return square;
}
#include<iostream>
#include <iomanip>
 
using namespace std;
int main()
{
	int i = 0,N = 0;
    double aver= 0;
    double var = 0;
	int a[101] = {0};
	cin>>N;
	for(i = 0;i<N;i++)
	{
		for(int j= 0;j<6;j++)
		{
			cin>>a[j];
		}
		aver = (double)(a[0]+a[1]+a[2]+a[3]+a[4]+a[5])/6;
		var = (double)(s(aver-a[1])+s(aver-a[2])+s(aver-a[0])+s(aver-a[3])+s(aver-a[4])+s(aver-a[5]))/6;
		
	cout.setf(ios::fixed);
	cout<<setprecision(2);
	cout<<aver<<endl<<var;
	}
}