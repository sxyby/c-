#include <iostream>
#include <string>
class cmp
{
public:
    cmp()
    {
        getline(std::cin,str1);
        getline(std::cin,str2);
        main();
    }
    void main()
    {
        for (int i = 0;i <= str2.length() - str1.length();i++)
        {
            if (str2.compare(i, str1.length(), str1) == 0)
            {
                std::cout << i+1 <<" ";
            }
            else
            if(i == 0)
            {
            	std::cout << "-1";
			}
        }
    }
private:
    long int num;
    char x;
    std::string str1,str2;
};
int main() 
{
    cmp a;
    return 0;
}