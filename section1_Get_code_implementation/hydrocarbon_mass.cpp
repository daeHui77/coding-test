#include<iostream>
using namespace std;

char a[101];
int main()
{
	int i = 0, pos = 0, c = 0, h = 0;
	scanf("%s", &a);
	
	if (a[1] == 'H')
	{
		c = 1;
		pos = 1; // H다음에 숫자가 있는지 확인
	}
	else
	{
		for ( i = 1; a[i] != 'H'; i++)
		{
			c = c * 10 + (a[i] - 48);
		}
		pos = i;
	}

	if (a[pos + 1] == '\0') h = 1;
	else
	{
		for (int i = pos + 1; a[i] != '\0'; i++)
		{
			h = h * 10 + (a[i] - 48);
		}
	}
	printf("%d", c*12 + h);
}