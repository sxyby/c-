#include<iostream>
using namespace std;
static int time=0; 
class hano
{
	public:
	hano()
	{
	}
	void change(int x,char a,char b,char c) 
	{
		
		if(x==1)
		{
		    time++;
			cout<<"step"<<time<<": move disk "<<x<<" from "<<a<<" to "<<c<<endl; 
		}
		else
		{   
		    
			change(x-1,a,c,b);
			time++; 
			cout<<"step"<<time<<": move disk "<<x<<" from "<<a<<" to "<<c<<endl; 
			change(x-1,b,a,c);
		}                                  
	}		
	private:
	
};
int main()
{
	int n;
	scanf("%d",&n);
	hano K;
	K.change(n,'A','B','C');
	return 0;
}
