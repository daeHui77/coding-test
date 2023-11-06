#include<iostream>
using namespace std;

int a[10001];
int main()
{
	int n = 0,cnt = 0;
	scanf("%d", &n);

	scanf("%d", &a[0]);
	printf("%d ", 1);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &a[i]);
		for (int j = i; j >= 0; j--)
		{
			if (a[i] <= a[j])
			{
				cnt++;
			}
		}
		printf("%d ", cnt);
		cnt = 0;
	}
}