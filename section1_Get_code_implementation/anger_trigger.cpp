#include<iostream>
using namespace std;

int main()
{
	int n = 0, cnt = 0,a[101],max=0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (i == n - 1)
		{
			max = a[n - 1];
		}
	}
	
	for(int i =n-1; i >= 1; i--)
	{
		if (a[i] > max)
		{
			max = a[i];
			cnt++;
		}
	}
	printf("%d", cnt);
}