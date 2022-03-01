#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//计算n的阶乘
int fac1()
{
	int i;
	int num;
	int   result = 1;
	printf("请输入num=:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		result *= i;

	}
	printf("%d! = %d", num, result);
	return 0;
}

//阶乘的递归
int fac(int n)
{
	if (n < 1)
		return 1;
	return n * fac(n - 1);
}

int main()
{
	int ret = fac(3);
	printf("ret=%d", ret);
	return 0;
}