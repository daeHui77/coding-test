#include<iostream>
using namespace std;
int arr[51][51];//�������� ������ �θ� ���� 0���� �ʱ�ȭ�� 
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