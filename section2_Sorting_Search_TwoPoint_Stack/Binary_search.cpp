#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m, le,mid,ri;
	scanf("%d %d", &n,&m);
	vector<int> arr(n+1);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr.begin(), arr.end());
	le = 1;
	ri = n;
	
	while (le<=ri)
	{
		mid = (le+ri) / 2;
		if (arr[mid] < m)
		{
			le = mid + 1;
		}
		else if (arr[mid] > m)
		{
			ri = mid - 1;
		}

		if (arr[mid] == m)
		{
			printf("%d", mid);
			break;
		}
	}
}