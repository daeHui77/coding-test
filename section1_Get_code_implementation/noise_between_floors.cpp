#include<iostream>
using namespace std;

int main()
{
	int n = 0, m = 0 , num=0, cnt=0, max=0;
	bool f = false;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		if (num > m)
		{
			f = true;
			if (f == true)
			{
				cnt++;
				if (max < cnt)
				{
					max = cnt;
				}
			}
		}
		else
		{
			f = false;
			cnt = 0;
		}
	}

	if (max == 0)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d", max);
	}
}