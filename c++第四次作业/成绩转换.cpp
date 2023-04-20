#include<iostream>
using namespace std;
int main()
{
	int grade = 0;
	cin>>grade;
	int x = grade/10;
	switch(x)
	{
		case 10:
		cout<<"A"<<endl;
		break;
		case 9:
		cout<<"A"<<endl;
		break;
		case 8:
		cout<<"B"<<endl;
		break;
		case 7:
		cout<<"C"<<endl;
		break;
		case 6:
		cout<<"E"<<endl;
		break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		cout<<"F"<<endl;
		break;
	}
	return 0;
}
