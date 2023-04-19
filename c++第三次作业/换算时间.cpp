#include<iostream>
using namespace std;
int main()
{
	long int BJT = 0;
	int bh = 0;
	int bm = 0;
	int uh = 0,um = 0;
	cin>>BJT;
	bh = BJT/100;
	bm = BJT%100;
	if(bh>=8&&bh<24&&bm>0&&bm<=59)
	{
		uh = bh-8;
		um = bm;
	}
	else
	if(bh<8&&bh>0&&bm>0&&bm<=59)
	{
		uh = bh-8+24;
		um = bm;
	}
	else
	if(bh>24||bh<0||bm<0||bm>59)
	{
		goto mark;
	}
	cout<<uh*100+um<<endl;
	mark:
	return 0;
}