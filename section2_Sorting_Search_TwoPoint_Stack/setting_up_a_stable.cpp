#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int Count(int mid, vector<int> x)
{
	int i, cnt = 1, pos = x[1];
	for (i = 2; i <= n; i++)
	{
		if (x[i] - pos >= mid) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}
int main()
{
	int m=0, le = 1,ri,mid,max = 0, res=0; 
	scanf("%d %d", &n, &m);

	vector<int> arr(n+1);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr.begin(), arr.end());

	
	ri = arr[n];

	while (le <= ri)
	{
		mid = (le + ri) / 2;

		if (Count(mid, arr) >= m)
		{
			res = mid;
			le = mid + 1;
		}
		else 
		{
			ri = mid - 1;
		}
	}
	printf("%d", res);

}