#include<iostream>
using namespace std;

int reverse(int x)
{
	int tmp = 0,res = 0, n = 0;
	while (x != 0)
	{
		res = x % 10;
		tmp = tmp * 10 + res;
		x = x / 10;
	}
	return tmp;
}

bool IsPrime(int x)
{
	bool b = true;
	if (x == 1) return false;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			b = false;
			break;
		}
	}

	return b;
}

int main()
{
	int x, n, num = 0;

	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		scanf("%d", &n);

		num = reverse(n);

		if (IsPrime(num) == true)
		{
			printf("%d", num);
		}
	}
}