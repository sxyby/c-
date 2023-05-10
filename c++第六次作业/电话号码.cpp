#include<iostream>
#include<string>
using namespace std;
class number
{
	public:
		number()
		{
			getline(std::cin,a);
			num();
		}
		void num()
		{
			for (int i = 0; i < a.length(); i++)
        {
            std::cout << (a[i] - 'A' - a[i] / 'S' - a[i] / 'Z') / 3 + 2;
        }
		}	
	private:
		std::string a;
};
int main()
{
	number a;
	return 0;
}