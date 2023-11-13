//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, i = 1,cnt=1,m=0,res = 0;
//	bool f = true;
//	scanf("%d" , &n);
//	
//	while (1)
//	{
//		i++;
//		f = true;
//
//		res = i;
//		while (res > 0)
//		{
//			if (res% 2 == 0)
//			{
//				res = res / 2;
//			}
//			else if (res % 3 == 0)
//			{
//				res = res / 3;
//			}else if (res % 5 == 0)
//			{
//				res = res / 5;
//			}
//			else if (res == 1)
//			{
//				break;
//			}
//			else
//			{
//				f = false;
//				break;
//			}
//		}
//		if (f == false)
//		{
//			continue;
//		}
//		else if (f == true)
//		{
//			cnt++;
//		}
//
//		if (cnt == n)
//		{
//			printf("%d", i);
//		}
//	}
//}
#include<iostream>
using namespace std;
int a[1501];
int main()
{
	int n, i,p2,p3,p5,min = 2147000000;
	scanf("%d" , &n);
	a[1] = 1;
	p2 = p3 = p5 = 1;
	for (int i = 2; i<= n; i++)
	{
		if (a[p2] * 2 < a[p3] * 3) min = a[p2] * 2;
		else min = a[p3] * 3;
		if (a[p5] * 5 < min) min = a[p5] * 5;
		if (a[p2] * 2 == min) p2++;
		if (a[p3] * 3 == min) p3++;
		if (a[p5] * 5 == min) p5++;
		a[i] = min;
	}
	printf("%d", a[n]);
	
	
}
