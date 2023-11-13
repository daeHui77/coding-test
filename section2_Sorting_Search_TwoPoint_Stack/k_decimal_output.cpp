#include<iostream>
using namespace std;

int stack[999];
int top = -1;
void push(int x)
{
	stack[++top] = x;
}
int pop()
{
	return stack[top--];
}


int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	char str[20] = "0123456789ABCDEF";

	while (n > 0)
	{

		push(n % k);

		n = n / k;

	}
	while (top >= 0)
	{
		printf("%c", str[pop()]);

	}


}