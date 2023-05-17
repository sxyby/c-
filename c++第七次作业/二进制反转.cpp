#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class rev
{
	public:
		rev()
		{
			
			for(int i =31;i>=0;i--)
			{
				cin>>a[i];
			}
			for(int j =0;j<32;j++)
			{
				cout<<a[j];
			}
		}
		private:
			char a[31];
};
int main()
{
	rev a;
	return 0;
}