#include<iostream>
using namespace std;

int main()
{
	char a[100];
	char b[100];
	int p = 0;
	
	fgets(a,100,stdin);//줄바꿈 문자까지 포함하여 20자 입력받음
	//scanf("%s", &a);


	for (int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] != ' ')//공백이 아닐때 
		{
			if (a[i] >= 97 && a[i] <= 122) //소문자일때
			{
				b[p++] = a[i];
			}
			else if (a[i] >= 65 && a[i] <= 90) // 대문자일때
			{
				b[p++] = a[i] + 32;
			}
		}
		
	}
	b[p] = '\0';//p가 문자가 들어있는 다음을 가리키기 때문에 마지막에 공백을 넣어야한다.
	printf("%s\n", b);
	 
	return 0;
}