#include<iostream>
using namespace std;
int arr[51][51];//전역으로 변수를 두면 전부 0으로 초기화됨 
int main()
{
	int  n, tmp = 0 ,cnt = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{
			if (arr[i - 1][j] < arr[i][j] && arr[i][j + 1] < arr[i][j] && arr[i + 1][j] < arr[i][j] && arr[i][j - 1] < arr[i][j])
			{
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}