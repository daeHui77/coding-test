#include<iostream>
#include<cmath>
//#include<cstdlib>
using namespace std;
int arr[9][9];
int main()
{
	int min = 999, sum = 0 ,sumarr[9],tmp=0;

	double a;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		sumarr[i] = round(sum / 9.0);// �Ǽ�/���� = �Ǽ� 9�� ������ ����� �ȵ� 9.0��������
		sum = 0;
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (abs(sumarr[i] - arr[i][j]) < min)
			{
				min = abs(sumarr[i] - arr[i][j]);
				tmp = arr[i][j];
			}
			else if (abs(sumarr[i] - arr[i][j]) == min)
			{
				if (arr[i][j] > tmp)
				{
					tmp = arr[i][j];
				}
			}
		}
		printf("%d %d\n", sumarr[i], tmp);
		min = 999;
		tmp = 0;
	}
	
}