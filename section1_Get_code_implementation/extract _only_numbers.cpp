#include<iostream>
using namespace std;

int main()
{
	char a[100];
	int res = 0, cnt = 0;

	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			res = res * 10 + (a[i] - '0');
		}
	}
	printf("%d\n", res);

	for (int i = 1; i <= res; i++)
	{
		if (res % i == 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}