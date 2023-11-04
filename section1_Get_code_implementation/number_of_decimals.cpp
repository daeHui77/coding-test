#include<iostream>
using namespace std;

bool sol(int x)
{
	bool f = true;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			f = false;
		}
	}
	return f;
}
int main()
{
	int a, tmp = 0, cnt = 0;
	
	scanf("%d", &a);

	for (int j = 2; j <= a; j++)
	{
		if (sol(j))
		{
			cnt++;
		}
	}

	printf("%d", cnt);


	
}