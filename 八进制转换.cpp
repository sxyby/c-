#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 	int num,b=1;
 	
 	cin>>num;
 	if(num==0)
 	cout<<num;
	while(1)
	{ 
  		if(num>=b)
 	{
  		b*=8;
   		continue;   
 	}
  		b/=8;
  		if(b==0)
  		break;
		  cout.fill('0');	
		       cout<<setw(6)<<num/b;
  		if(num>=b)
  			num%=b;
	}
	return 0;
	
}