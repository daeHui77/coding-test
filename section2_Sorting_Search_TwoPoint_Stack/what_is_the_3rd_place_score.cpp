#include<iostream>
using namespace std;

int main()
{
	int i = 0, n = 0, tmp = 0, a[101], cnt = 0, pre = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	pre = a[n - 1];
	for (int i = n-1; i >=0; i--)
	{
		if (cnt == 2)
		{
			printf("%d", pre);
			return 0;
		}
		if (pre > a[i - 1])
		{
			cnt++;
			pre = a[i - 1];
		}
	}
}