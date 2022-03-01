#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归的方式
int my_strlen(char* str)
{
	int count = 0;
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
}
//非递归的方式
int my_strlen1(char* str)
{
	char arr[] = "hello";
	int len = strlen(arr);//arr是数组，数组传参，才过去的不是整个数组，而是第一个元素的地址
	printf("len=%d", len);
	return 0;
}
int my_strlen2(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	my_strlen1(arr);
	printf("\n");
	my_strlen1(arr);
	printf("\n");
	int ret=my_strlen2(arr);
	printf("len=%d",ret);
	

	
	return 0;
}