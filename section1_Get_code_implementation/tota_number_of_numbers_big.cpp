#include<iostream>
using namespace std;

int main()
{
	int a = 0, sum = 0, d = 9, res = 0,cnt=1;

	scanf("%d", &a);

	while (sum + d < a)
	{
		res += cnt * d;
		sum += d;
		cnt++;
		d = d * 10;
	}
	
	printf("%d", ((a - sum) * cnt)+res);

	
}