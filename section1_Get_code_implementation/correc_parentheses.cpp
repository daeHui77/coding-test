#include<iostream>
using namespace std;
int main() {
	char a[30];
	int cnt1 = 0;
	bool f = false;
	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
		{
			cnt1++;
		}
		else if (a[i] == ')')
		{
			cnt1--;
		}
		if (cnt1 < 0)
		{
			f = true;
			break;
		}
	}
	//printf("%d %d", cnt1, cnt2);
	if (cnt1 == 0  && f == false)
	{
		printf("YES");
	}
	else if (cnt1 != 0 || f == true)
	{
		printf("NO");
	}
}