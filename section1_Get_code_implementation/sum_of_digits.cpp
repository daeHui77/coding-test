#include<iostream>
using namespace std;
int a[101];

int digit_sum(int x)
{
	int res = 0;
	while (x != 0)
	{
		res = res + (x % 10);
		x = x / 10;
	}
	return res;
}

int main()
{
	int n = 0, resmax = 0, max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (max < digit_sum(a[i]))
		{
			resmax = a[i];
			max = digit_sum(a[i]);
		}
		else if (max == digit_sum(a[i]))
		{
			if (resmax < a[i])
			{
				resmax = a[i];
			}
		}
	}

	printf("%d", resmax);
}

