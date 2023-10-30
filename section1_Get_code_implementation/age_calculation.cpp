#include<iostream>
using namespace std;

int main()
{	
	int n, n1, n2, n3;
	char age[14];
	for (int i = 0; i < 14; i++)
	{
		cin >> age[i];
	}
	n = age[7] - '0';
	n1 = age[0] - '0';
	n2 = age[1] - '0';
	n3 = n1 * 10 + n2;

	if (n == 1 || n == 2)
	{
		cout << 20 + 100 - n3 << " ";

		if (n == 1)
		{
			cout << "M";
		}
		else
		{
			cout << "W";
		}
	}
	else
	{
		cout << 20 - n3 << " ";
		if (n == 3)
		{
			cout << "M";
		}
		else
		{
			cout << "W";
		}
	}
	return 0;
}