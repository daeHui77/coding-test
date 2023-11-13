#include<iostream>
using namespace std;

int arr[11][11], view[2][11];
int main()
{
	int n, min = 10, cnt=0;

	scanf("%d", &n);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &view[i][j]);
		}
	}


	for (int k = 0; k < n; k++)
	{
		for (int j = n-1; j >= 0; j--)
		{
			if (view[0][k] > view[1][j])
			{
				cnt += view[1][j];
			}
			else {
				cnt += view[0][k];
			}
		}
	}
	printf("%d", cnt);
}