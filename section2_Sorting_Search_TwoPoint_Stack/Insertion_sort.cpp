#include<iostream>
using namespace std;

int main()
{
	int n = 0, tmp = 0, a[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i++)
	{
		tmp = a[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (tmp < a[j])
			{
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


}