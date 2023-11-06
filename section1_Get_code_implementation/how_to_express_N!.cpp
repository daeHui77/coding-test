#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int i, j, n, tmp;
	scanf("%d", &n);
	vector<int> ch(n + 1);

	for (i = 2; i < n; i++)//소인수분해
	{
		tmp = i;
		j = 2;
		while (1)
		{
			if (tmp % j == 0)
			{
				tmp = tmp / j;
				ch[j]++;
			}
			else
			{
				j++;
			}
			if (tmp == 1) break;
		}
	}
	printf("%d! = ", n);
	for (i = 2; i <= n; i++)
	{
		if (ch[i] != 0) printf("%d ", ch[i]);
	}

	
	

	
}