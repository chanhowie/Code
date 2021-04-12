#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输出十进制中对应二进制中1的个数
//int main()
//{
//	int i = 21;
//	int n = 1;
//	unsigned short count = 0;
//	do
//	{
//		if (n&i)
//			count++;
//		i = i >> 1;
//	} while(i&&count<32);
//	printf("%d", count);
//	return 0;
//}


int main()
{
	unsigned short count = 0;
	int i = 5;
	if (i < 0)
	{
		i = -i;
		count++;
	}


	int n = 1;
	do
	{
		if (n&i)
			count++;
		n = n << 1;
	} while (n);
	printf("%d", count);
	return 0;
}