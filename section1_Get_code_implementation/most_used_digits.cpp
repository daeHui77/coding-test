#include<iostream>
#include<string>
using namespace std;
int a[10];

int main()
{
	int num = 0, max = 0, ans = 0;;
	char n[101];
	scanf("%s", &n);
	int i = 0;
	while (n[i] != '\0')
	{
		a[(int)n[i] - '0']++;
		i++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (max <= a[i])
		{
			max = a[i];
			ans = i;
		}
	}
	printf("%d", ans);

}