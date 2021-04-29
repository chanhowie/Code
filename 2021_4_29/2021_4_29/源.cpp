#define _CRT_SECURE_NO_WARNINGS 1
//函数指针初识
#include<stdio.h>
int ADD(int x, int y)
{
	int z = x + y;
	return  z;
}
int main()
{
	int x = 20, y = 30;
	printf("%d\n",ADD(x, y));
	int(*p)(int ,int) = &ADD;//定义一个只想函数的指针
	printf("%d\n", (*p)(60,50));//通过该指针来指向函数的地址，从而调用
	return 0;
}