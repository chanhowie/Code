#define _CRT_SECURE_NO_WARNINGS 1
//判断程序计算机中内存存储方式大小端
#include <stdio.h>
bool check();
int main()
{
	if (check())//如果返回1小端存储
		printf("小端储存\n");
	else 
		printf("大端储存\n");
	return 0;
}
bool check()
{
	int i = 0; //00000000 00000000 00000000 00000001
	return *(char*)&i;//对指针的地址进行解引用返回第一位
}