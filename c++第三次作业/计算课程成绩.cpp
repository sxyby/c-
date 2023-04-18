#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main()
{
	int n = 0;
	string name[100]   = {0};
	double grade1[100] = {0};
	double grade2[100] = {0};
	double fact[100]   = {0};
	int i = 0,j=0,k=0;
	cin>>n;
	int m = 0;
	for(m = 0;m<n;m++)
	{
		cin>>name[m]>>grade1[m]>>grade2[m];
		fact[m]= grade1[m]*0.40+grade2[m]*0.60;
	}
	
	int temp = 0;
	string ch[1] = {0};
	for(int x = 0;x<m-1;x++)
	{
		for(int a = 0;a<m-x-1;a++)
		{
			if(fact[a]>fact[a+1])
		{
			temp = fact[a];
			fact[a]= fact[a+1];
			fact[a+1] = temp;
			ch[0]= name[a];
			name[a] = name[a+1] ;
			name[a+1] = ch[0];
			temp = grade1[a];
			grade1[a] = grade1[a+1] ;
			grade1[a+1] = temp;
			temp = grade2[a];
			grade2[a] = grade2[a+1] ;
			grade2[a+1] = temp;
		}
		}
	}
	cout.setf(ios::fixed);
	cout<<setprecision(2);
	for( m = 0;m<n;m++)
	{
		cout<<name[m]<<" "<<grade1[m]<<" "<<grade2[m]<<" "<<fact[m]<<endl;
	}
	return 0;
}