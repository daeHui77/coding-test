#include<iostream>
using namespace std;

int main()
{
	int i = 0, n = 0, tmp = 0,a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i]< a[j])
			{
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}