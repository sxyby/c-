#include<iostream>
using namespace std;
class lesson
{
	public:
		int n ;
		int k ;
		int a[];
		void Iscancle()
		{
			int count = 0;
			for(int i = 0;i<n;i++)
			{
				if(a[i]<=0)
				{
				count ++;
				}
			}
			count <= k?cout<<"yes":cout<<"no";
			cout<<endl;
		}
};
int main()
{
	lesson x;
	cin>>x.n>>x.k;
	int a[999] = {0};
	for(int i = 0;i<x.n;i++)
{
			cin>>a[i];
}
	x.Iscancle();
	return 0;
}