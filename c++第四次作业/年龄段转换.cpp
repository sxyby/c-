#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	cin>>a;
	if(a<11&&a>0)
	{
		cout<<"Children"<<endl;
	}
	else
	if(a<21&&a>10)
	{
		cout<<"Teenagers"<<endl;
	}
	else
	if(a<41&&a>20)
	{
		cout<<"youth"<<endl;
	}
	else
	if(a<51&&a>40)
	{
		cout<<"middle_aged"<<endl;
	}
	else
	if(a<81&&a>50)
	{
		cout<<"Elderly"<<endl;
	}
	else
	if(a<101&&a>80)
	{
		cout<<"Old man"<<endl;
	}
	return 0;

}