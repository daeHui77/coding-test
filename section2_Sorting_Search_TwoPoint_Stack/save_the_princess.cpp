#include<iostream>
using namespace std;

int main()
{
	int n = 0, k = 0, cnt = 0, x[1001] = {0,};

	scanf("%d %d", &n, &k);

	
	int i = 0, tmp = n;
	while (1)
	{
		i++;
		if (x[i] != 1)
		{
			cnt++;
		}
		if (cnt == k)
		{
			x[i] = 1;
			tmp--;
			cnt = 0;
		}
		if (tmp == 1)
		{
			for (int i = 1; i <= n; i++)
			{
				if (x[i] != 1)
				{
					printf("%d", i);
					
					return 0;
				}
			}
		}
		
		if (i >= n)
		{
			i = 0;
		}
	}

	
}