#include<iostream>
using namespace std;

int main()
{
	int sum = 0, n,cnt=0;

	scanf("%d", &n);
	

	for (int i = n-1; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			sum += j;
			if (sum == n)
			{
				for (int k = j; k <= i; k++)
				{
					if (k == j)
					{
						printf("%d ", k);
					}
					else
					{
						printf("+ %d ", k);
					}
				}

				printf("= %d\n", n);
				cnt++;
				sum = 0;
				break;
			}
			else if(sum > n)
			{
				sum = 0;
				break;
			}
			if (j == 1)
			{
				printf("%d", cnt);
				return 0;
			}
		}
	}
	



}