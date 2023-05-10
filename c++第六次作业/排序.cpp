#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main()
{
	int i,n = 0;
	int min = 10001;
	int num[100] = {0};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int j = 0; j < n - 1; j++)
	{
		for (int m = 0; m < n - j-1; m++)
		{
			if (num[m] > num[m+1])
			{
				min = num[m];
				num[m] = num[m + 1];
				num[m + 1] = min;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << num[i]<<" ";
	}
	return 0;
}