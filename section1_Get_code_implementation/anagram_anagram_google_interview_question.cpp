#include<iostream>
using namespace std;
int arr1[27];
int arr2[27];

void sol1(char a[])
{
	int j = 0;
	for (int i = 0; i < 27; i++)
	{
		while (a[j] != '\0')
		{
			if (i == (int)a[j] - 97)
			{
				arr1[i]++;
			}
			else if (i == (int)a[j] - 65)
			{
				arr2[i]++;
			}
			j++;
		}
		
	}

}
void sol2(char a[])
{
	int j = 0;
	for (int i = 0; i < 27; i++)
	{
		while (a[j] != '\0')
		{
			if (i == (int)a[j] - 97)
			{
				arr1[i]--;
			}
			else if (i == (int)a[j] - 65)
			{
				arr2[i]--;
			}
			j++;
		}

	}

}

int main()
{
	char a[101];
	bool b = true;
	int cnt = 0;

	scanf("%s", &a);
	sol1(a);

	scanf("%s", &a);
	sol2(a);

	for (int i = 0; i < 27; i++)
	{
		if (arr1[i] != 0)
		{
			b = false;
			break;
		}
	}

	if (b == true)
	{
		printf("%s", "YES");
	}
	else
	{
		printf("%s", "NO");
	}
	
}