#include<iostream>
using namespace std;

int sum(int x)
{
	int sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int n;
	bool f[11];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int num[2] = { .0 };
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &num[j]);
		}
		
		if (sum(num[0]) == num[1])
		{
			f[i] = true;
		}
		else
		{
			f[i] = false;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (f[i] == true)
		{
			printf("%s\n", "YES");
		}
		else
		{
			printf("%s\n", "NO");
		}
	}
	
}