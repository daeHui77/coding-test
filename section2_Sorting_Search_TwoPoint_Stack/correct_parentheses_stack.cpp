#include<iostream>
#include<stack>

using namespace std;

int main()
{
	char a[500];
	stack<char> arr;
	bool f = true;
	scanf("%s", &a);

	for (int i = 0; a[i]!= '\0'; i++)
	{
		if (a[i] == '(')
		{
			arr.push(a[i]);
		}
		else if (a[i] == ')')
		{
			if (arr.empty())
			{
				printf("%s", "NO");
				f = false;
				break;
			}else arr.pop();
			
		}
	}
	if (!arr.empty() && f == true)
	{
		printf("%s", "NO");
	}
	else if (arr.empty() && f == true)
	{
		printf("%s", "YES");
	}
	
	return 0;
}