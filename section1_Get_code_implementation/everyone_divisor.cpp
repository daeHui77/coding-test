#include<iostream>
using namespace std;
int a[50001];//Ÿ�� ����Ʈ�� ����µ� ���������� 5�������� 50001�����迭�� ����� �־���ذ�ȴ�.
int main()
{
	int n = 0, cnt=0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <=n ; j = j+i)
		{
			a[j]++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	
	
	return 0;
}