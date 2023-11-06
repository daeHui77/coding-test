#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
	int n = 0, pre=0 ,pos = 0,now=0; 
	bool f = true;
	scanf("%d", &n);

	vector<int> ch(n);
	
	scanf("%d", &pre);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &now);
		pos = abs(pre - now);
		if (pos > 0&&pos<n && ch[pos] == 0)
		{
			ch[pos] = 1;
		}
		else
		{
			printf("%s", "NO");
			return 0;
		}
		pre = now;
	}
	printf("%s", "YES");
}