#include<iostream>

using namespace std;
int arr[2001];
int main()
{
	int cnt = 0, pos = 0, n, k, time = 0, tmp = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		tmp += arr[i];
	}
	scanf("%d", &k);

	if (tmp <= k)
	{
		printf("%d", -1);
		return 0;
	}
	while (1)
	{
		pos++;
		if (pos > n)pos = 1;
		if (arr[pos] == 0)continue;
		arr[pos]--;
		time++;
		if (time == k)break;
	}
	while (1)
	{
		pos++;
		if (pos > n) pos = 1;
		if (arr[pos] != 0)break;
	}
	printf("%d", pos);
}