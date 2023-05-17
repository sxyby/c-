#include<iostream>
#include<string>
using namespace std;
class pow
{
	public:
		pow()
		{
			pro = 1;
			cin>>num;
			cin>>n;
			for(int i = 0;i<n;i++)
			{
				pro *= num;
			}
			std::cout << pro;
		}
	private:
			int n;
		    int num;
			long long int pro;
};
int main()
{
	pow a;
	return 0;
}