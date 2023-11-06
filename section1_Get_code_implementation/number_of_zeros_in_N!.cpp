#include<iostream>
using namespace std;

int main()
{
	int n = 0, j = 0,cnt1=0, cnt2 = 0, max = 0, tmp=0;
	
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		tmp = i;
		j = 2;
		while (1)
		{
			if (tmp % j == 0)
			{
				if (j == 2)
				{
					cnt1++;
				}
				else if (j == 5)
				{
					cnt2++;
				}
				tmp = tmp / j;
				
			}
			else
			{
				j++;
				
			}
			if (tmp == 1) break;
		}
	}

	if (cnt1 >= cnt2)
	{
		printf("%d", cnt2);
	}
	else {
		printf("%d", cnt1);
	}
}