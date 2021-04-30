#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int x ,int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x *y;
}
int DIV(int x, int y)
{
	return x/y;
}
int main()
{
//	int (*p)(int ,int ) = &ADD;
	//函数指针的调用
//	printf("%d",(*p)(3,5));
	int(*p[5])(int x, int y) = {0, ADD, SUB, MUL, DIV };
	//函数数组指针的定义
	printf("%d",(*p[4])(5,3));

	return 0;
}