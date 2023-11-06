#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int arr[101];
int arrseat[101];
bool desc(int a, int b) {
	return a > b;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	vector<int>a(n);
	for (int i = 0; i <n; i++)
	{
		scanf("%d", &a[i]);
		arr[i] = a[i];
	}

	sort(a.begin(), a.end(),desc);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if (arr[i] == a[j])
			{
				printf("%d ", j+1);
				break;
			}
		}
	}
}