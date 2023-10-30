#include<iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i--)
	{
		if (i% m == 0)
		{
			sum += i;
		}
	}

	cout << sum;
	return 0;
}