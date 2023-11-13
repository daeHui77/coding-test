#include<iostream>
using namespace std;

int arr[51][51];
int main()
{
	int h, w, sum = 0, max = 0, sh, sw;

	scanf("%d %d", &h, &w);
	for (int i = 0; i < h; i++)
	{
		for (int k = 0; k < w; k++)
		{
			scanf("%d", &arr[i][k]);
		}
	}
	scanf("%d %d", &sh, &sw);

	for (int i = 0; i <= h - sh; i++)
	{
		for (int k = 0; k <= w - sw; k++)
		{
			for (int j = i; j < i+sh; j++)
			{
				for (int d = k; d < k+sw; d++)
				{
					sum += arr[j][d];
				}
			}
			if (max < sum)
			{
				max = sum;
			}
			sum = 0;
		}
	}
	printf("%d", max);
}