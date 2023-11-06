#include<iostream>
using namespace std;

int arr[100000] = {0};
int main()
{
	int n = 0,j=0, k = 0,cnt=0,max =-2147000000,sum =0;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (i < k)
		{
			sum = sum + arr[i];
			if (i == k - 1)
			{
				max = sum;
			}
		}
		else
		{
			sum = sum + arr[i] - arr[i-k];
		}
		
		if (max < sum)
		{
			max = sum;
		
		}
	}
	
	printf("%d", max);

}