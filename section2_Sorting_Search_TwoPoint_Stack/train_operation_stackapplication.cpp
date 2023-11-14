#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n, m, cnt = 1, pocnt = 0, a[33] = {0,};
	char po[62];//출력 결과 배열
	bool f = true;
	stack<int>arr;//스택배열 -> 비교배열이랑 비교
	

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}

	for (int i =1; i <= n; i++)
	{
		scanf("%d", &m);

		arr.push(m);
		po[pocnt++] = 'P';

		while (1)
		{
			if (arr.empty()) break;
			if (a[cnt] == arr.top())
			{
				arr.pop();
				po[pocnt++] = 'O';
				cnt++;
			}
			else if (a[cnt] != arr.top())
			{
				break;
			}
		}
	}
	if (!arr.empty())
	{
		printf("%s", "impossible");
	}
	else
	{
		for (int i = 0; i < pocnt; i++)
		{
			printf("%c",po[i]);
		}
	}
	return 0;
}