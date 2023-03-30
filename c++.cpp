#include<iostream>
using namespace std;
int main()
{
	long int m = 0, n = 0;
	long int gys = 0, gbs = 0;
	cin >> m >> n;
	int i = m,j = n;
	if (j > i)
	{
		if (j % i != 0)
		{
			i--;
		}
		gys = i;
	}
	if (j <= i)
	{
		if (i % j != 0)
		{
			j--;
		}
		gys = j;
	}
	gbs = m*n / gys;
	cout <<"gys ="<< gys<<endl << "gbs = "<<gbs << endl;
	return 0;
}