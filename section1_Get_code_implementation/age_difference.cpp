#include<iostream>
using namespace std;

int main()
{
	int n = 0,m, temp=0,tmp = 0;
	cin >> n;
	int age[100] ;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		age[i] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (age[i] < age[j])
			{
				tmp = age[i];
				age[i] = age[j];
				age[j] = tmp;
			}
		}
		m = age[i];
	}
	
	cout << m - age[0];
	return 0;
}