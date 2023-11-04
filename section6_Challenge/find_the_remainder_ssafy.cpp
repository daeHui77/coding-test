#include<iostream>
#include<vector>
using namespace std;

int arr[101];

int solution(int arr[], int num)
{
	int sol = 0;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			sol += arr[i] % arr[j];
			sol += arr[j] % arr[i];
		}
	}
	return sol;
}
int main()
{
	int n = 0, num = 0;

	vector<int> v;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		for (int j = 0; j < num; j++)
		{
			scanf("%d", &arr[j]);
		}
		v.push_back(solution(arr, num));

	}

	for (int i = 0; i < n; i++)
	{
		printf("#%d %d\n", i + 1, v.at(i));
	}
}