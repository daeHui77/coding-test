#include<iostream>
using namespace std;

int main()
{
	int n = 0, max = 0, a[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				max = a[j];
				a[j] = a[j+1];
				a[j+1] = max;
			}
		}
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


}