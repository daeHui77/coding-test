#include<iostream>
using namespace std;
int a[50001];//타임 리미트가 생기는데 전역변수로 5만까지면 50001까지배열을 만들어 주어야해결된다.
int main()
{
	int n = 0, cnt=0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <=n ; j = j+i)
		{
			a[j]++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	
	
	return 0;
}