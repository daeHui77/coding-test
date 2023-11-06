#include<iostream>
using namespace std;

int a[11];
int b[11];
int main()
{
	int cnta = 0 , cntb=0;
	bool fa = false, fb = false;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == b[i])
		{
			cnta++;
			cntb++;
		}
		else if (a[i] > b[i])
		{
			cnta = cnta+3;
			fa = true;
			fb = false;
		}
		else if (a[i] < b[i])
		{
			cntb = cntb+3;
			fb = true;
			fa = false;
		}
	}
	printf("%d %d\n", cnta, cntb);
	if (cnta > cntb)
	{
		printf("%s", "A");
	}
	else if (cnta < cntb)
	{
		printf("%s", "B");
	}
	else if (cnta == cntb)
	{
		if (fa == true)
		{
			printf("%s", "A");
		}
		else if(fb == true)
		{
			printf("%s", "B");
		}
		else
		{
			printf("%s", "D");
		}
		
	}
}