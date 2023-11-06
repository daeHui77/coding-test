#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0,cnt=0,max = 0; 
	
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		if (i == 0)
		{
			cnt++;
		}
		else
		{
			if (a[i - 1] <= a[i])
			{
				cnt++;

				if (max < cnt)
				{
					max = cnt;
				}
			}
			else
			{
				cnt = 1;
			}
		}
	}
	printf("%d", max);
}