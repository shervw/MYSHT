#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int t = 0;
	printf("������������");
	scanf_s("%d%d", &i, &j);
	while (j != 0)
	{
		t = i % j;
		i = j;
		j = t;
	}
	printf("��Լ��Ϊ=%d", i);
	return 0;
}
//24%12=2...0
//t = 0;
//i = 12;
//j = 0;
