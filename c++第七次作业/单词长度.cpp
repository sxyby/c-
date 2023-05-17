#include<iostream>
#include<string>
using namespace std;
class text
{
	public:
	text()
	{
		n = 0;
		for(int i = 0;i<100;i++)
		{
			getline(std::cin,a[i]);
			n++;
			if(a[i].back() == ' ')
			{
				continue;
			}
			if(a[i].back() == '.')
			{
				break;
			}
		}	
		show();
	}
	void show()
	{	
		for(int i = 0;i<n;i++)
		{
			if(a[i].back() == '.'||a[i].back() == ' ')
			{
				std::cout << a[i].length()-1<<" ";
			}
			else
			std::cout << a[i].length()<<" ";
		}	
	}
	private:
		std::string a[100];
		int n;
};
int main()
{
	text a;
	return 0;
}