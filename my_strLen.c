#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ�ķ�ʽ
int my_strlen(char* str)
{
	int count = 0;
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
}
//�ǵݹ�ķ�ʽ
int my_strlen1(char* str)
{
	char arr[] = "hello";
	int len = strlen(arr);//arr�����飬���鴫�Σ��Ź�ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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