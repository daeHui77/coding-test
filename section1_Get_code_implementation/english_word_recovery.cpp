#include<iostream>
using namespace std;

int main()
{
	char a[100];
	char b[100];
	int p = 0;
	
	fgets(a,100,stdin);//�ٹٲ� ���ڱ��� �����Ͽ� 20�� �Է¹���
	//scanf("%s", &a);


	for (int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] != ' ')//������ �ƴҶ� 
		{
			if (a[i] >= 97 && a[i] <= 122) //�ҹ����϶�
			{
				b[p++] = a[i];
			}
			else if (a[i] >= 65 && a[i] <= 90) // �빮���϶�
			{
				b[p++] = a[i] + 32;
			}
		}
		
	}
	b[p] = '\0';//p�� ���ڰ� ����ִ� ������ ����Ű�� ������ �������� ������ �־���Ѵ�.
	printf("%s\n", b);
	 
	return 0;
}