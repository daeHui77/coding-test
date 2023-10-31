#include<iostream>
using namespace std;

int digit_sum(int x)
{
	int cnt = 0;

	while (x != 0)
	{
		cnt++;
		x = x / 10;
	}
	return cnt;
}

int main()
{
	int a = 0, sum = 0;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		sum += digit_sum(i);
	}
	printf("%d", sum);
}