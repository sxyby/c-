#include<iostream>
using namespace std;
int main ()
{
	int num = 0;
	int i= 0,j = 0;
	cin>>num;
	
	int a[16][16]= {0};
	for( i =0;i<num;i++)
	{
		int n= 0;
		cin>>n;
		for( j = 1;j<n+1;j++ )
		{
			a[j][1] = 1;
			a[j][j] = 1;
		}
		for(int j = 1;j<n+1;j++)
		{
			for(int m =1;m<j;m++)
			{
				a[j][m] = a[j-1][m-1]+a[j-1][m];
			}
			
		}
		for(i = 1;i<n+1;i++)
		{
			for(j= 1;j<=i;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		}
		
	
		
	

		return 0; 
}