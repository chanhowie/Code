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
	//����ָ��ĵ���
//	printf("%d",(*p)(3,5));
	int(*p[5])(int x, int y) = {0, ADD, SUB, MUL, DIV };
	//��������ָ��Ķ���
	printf("%d",(*p[4])(5,3));

	return 0;
}