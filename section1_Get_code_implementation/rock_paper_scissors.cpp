#include<iostream>
using namespace std;

int a[101];
int b[101];
int main()
{
	int n = 0;
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			printf("%s\n", "D");
		}
		else if (a[i]< b[i])
		{
			if (a[i] == 1 && b[i] == 3)
			{
				printf("%s\n", "A");
			}
			else
			{
				printf("%s\n", "B");
			}
			
		}
		else
		{
			if (a[i] == 3 && b[i] == 1)
			{
				printf("%s\n", "B");
			}
			else
			{
				printf("%s\n", "A");
			}
		}
	}
}