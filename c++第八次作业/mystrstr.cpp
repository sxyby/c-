#include <iostream>
#include <string>
using namespace std;
class mystrstr
{
public:
    mystrstr()
    { 
        getline(std::cin,str2);
        getline(std::cin,str1);
        main();
    }
    void main()
    {
        for (int i = 0;i <= str2.length() - str1.length();i++)
        {
            if (str2.compare(i, str1.length(), str1) == 0)
            {
                std::cout << i+1 <<" ";
                break;
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
    mystrstr a;
    return 0;
}