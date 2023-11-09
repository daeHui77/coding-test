#include<iostream>
#include<vector>
using namespace std;
int ar1[101], ar2[101], ar3[203];
int main() {
	int n, m, i, j, a1 = 1, a2 = 1,a3=1;
	

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &ar1[i]);
	}

	scanf("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &ar2[i]);
	}
	
	while (a1 <= n && a2 <= m)
	{
		if (ar1[a1] < ar2[a2])
		{
			ar3[a3++] = ar1[a1++];
		}
		else
		{
			ar3[a3++] = ar2[a2++];
		}
	}
	while (a1 <= n)
	{
		ar3[a3++] = ar1[a1++];
	}
	while (a2 <= m)
	{
		ar3[a3++] = ar2[a2++];
	}
	for (int i = 1; i < a3; i++)
	{
		printf("%d ", ar3[i]);
	}
}
