#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, m, i, j, aa = 0, bb = 0, cc = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());

	vector<int> c(min(n,m));
	while (aa != n && bb != m)
	{
		if (a[aa] != b[bb] && a[aa] < b[bb])
		{
			aa++;
		}
		else if (a[aa] != b[bb] && a[aa] > b[bb])
		{
			bb++;
		}
		else if (a[aa] == b[bb])
		{
			c[cc] = a[aa];
			cc++;
			aa++;
			bb++;
		}
	}
	sort(c.begin(), c.end());

	for (int i = min(n, m) - cc; i < min(n, m); i++)
	{
		printf("%d ", c[i]);
	}
}
