#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

//大括号里面的枚举常量是不能改变的
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
	//"abc" ---放的有 'a','b','c' ,'\0'  \0是字符串的结束标志，其值也为0
	char arr1[] = "abc";
	char arr[] = { "abc" };

	char arr2[] = { 'a','b','c' };
	//他两之间最后的结束标志不一定是\0 也可以是其他的（如：运行结果出来的烫）,而加上0，是让它结束
	char arr3[] = { 'a','b','c',0 };
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s", arr3);

	// 注意： \0不计算在字符串长度内
	printf("arrlen=%d\n", strlen(arr));
	printf("arr1len=%d\n", strlen(arr1));

	//'a','b','c'不知道后面是多少，长度是一个随机值，在后面找到结束符才结束
	printf("arr2len=%d\n", strlen(arr2));
	printf("arr3len=%d\n", strlen(arr3));

	//例如，以前的 ??) 就是三字母词，为了不让它变成三字母词则出现了转译
	printf("(are you ok??)\n");
	printf("(are you ok\?\?)");
	printf("\n");

	//例如输出一个单引号，则需要转译，否则编译器会认为单引号不匹配会报错
	printf("%c", '\'');

	//注意： \t组合在一起是一个字符，\32是一个转义字符，两个八进制数字
	//注意：\ddd:表示1--3个八进制数。 则\32是八进制转为十进制： 3*8^1+2*8^0
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');

	// \xdd ，dd表示2个十六进制数 6*16^1+9*16^0=96+9=105 97=a 105=i
	printf("%c\n", '\x69');
	return 0;
}
int test2()
{
	const int n = 10;//常变量
	int arr[10] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("%d", MALE);
	printf("%d", FEMALE);
	printf("%d", SECRET);

	//通过枚举类型创建出来的变量是可以改变的
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
	//字符类型 char  %c打印字符格式数据
	char ch = 'A';
	//短整型 short
	//%d 打印整数数
	//%f  打印浮点数--打印小数
	float num = 52;
	printf("%f\n", num);
	printf("%lf\n", num);//一般用%lf
	int num1 = 36;
	//%p  以地址形式打印
	printf("地址是：%p\n", num1);
	//%x  打印十六进制数
	printf("%d的十六进制数是%x \n", num1, num1);
	//%o   打印八进制数
	printf("%d的八进制数是%o\n", num1, num1);

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));





}