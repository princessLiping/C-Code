#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

//�����������ö�ٳ����ǲ��ܸı��
enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{



}
int strAndlen()
{
	//"abc" ---�ŵ��� 'a','b','c' ,'\0'  \0���ַ����Ľ�����־����ֵҲΪ0
	char arr1[] = "abc";
	char arr[] = { "abc" };

	char arr2[] = { 'a','b','c' };
	//����֮�����Ľ�����־��һ����\0 Ҳ�����������ģ��磺���н���������̣�,������0������������
	char arr3[] = { 'a','b','c',0 };
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s", arr3);

	// ע�⣺ \0���������ַ���������
	printf("arrlen=%d\n", strlen(arr));
	printf("arr1len=%d\n", strlen(arr1));

	//'a','b','c'��֪�������Ƕ��٣�������һ�����ֵ���ں����ҵ��������Ž���
	printf("arr2len=%d\n", strlen(arr2));
	printf("arr3len=%d\n", strlen(arr3));

	//���磬��ǰ�� ??) ��������ĸ�ʣ�Ϊ�˲������������ĸ���������ת��
	printf("(are you ok??)\n");
	printf("(are you ok\?\?)");
	printf("\n");

	//�������һ�������ţ�����Ҫת�룬�������������Ϊ�����Ų�ƥ��ᱨ��
	printf("%c", '\'');

	//ע�⣺ \t�����һ����һ���ַ���\32��һ��ת���ַ��������˽�������
	//ע�⣺\ddd:��ʾ1--3���˽������� ��\32�ǰ˽���תΪʮ���ƣ� 3*8^1+2*8^0
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');

	// \xdd ��dd��ʾ2��ʮ�������� 6*16^1+9*16^0=96+9=105 97=a 105=i
	printf("%c\n", '\x69');
	return 0;
}
int test2()
{
	const int n = 10;//������
	int arr[10] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("%d", MALE);
	printf("%d", FEMALE);
	printf("%d", SECRET);

	//ͨ��ö�����ʹ��������ı����ǿ��Ըı��
	enum Color c = RED;
	c = GREEN;


	return 0;
}
int add_TwoNumber()
{
	int num1, num2;
	int sum;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("result=%d", sum);
	return 0;

}
int test1()
{
	//�ַ����� char  %c��ӡ�ַ���ʽ����
	char ch = 'A';
	//������ short
	//%d ��ӡ������
	//%f  ��ӡ������--��ӡС��
	float num = 52;
	printf("%f\n", num);
	printf("%lf\n", num);//һ����%lf
	int num1 = 36;
	//%p  �Ե�ַ��ʽ��ӡ
	printf("��ַ�ǣ�%p\n", num1);
	//%x  ��ӡʮ��������
	printf("%d��ʮ����������%x \n", num1, num1);
	//%o   ��ӡ�˽�����
	printf("%d�İ˽�������%o\n", num1, num1);

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));





}