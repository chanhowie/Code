#define _CRT_SECURE_NO_WARNINGS 1
//输入一个长度n    输出长度范围内的所有数字
//比如5    输出0-99999
#include<stdio.h>
#include <limits.h>
int FindZeroToMaxnuber(int);

int main()
{
	int bit = 3;
	FindZeroToMaxnuber(bit);
	return 0;
}
int FindZeroToMaxnuber(int bit)
{
	int times = 10;
	for (; bit >1; bit--)
		times =10*times;
	int i = 0;
	if (bit < 1)
		return 0;
	char character[20] = {0};
	for (i; i < 19;i++)
		character[i] = { '0' };
	 i = 18;
	for (;times >0; times--)
	{
		while (character[i] != '9')
		{
			character[i] ++;
			//i--;
		}
		if (character[i - 1] == '9')
		{
			character[i - 1] = '0';
			character[i - 2]++;
		}

		character[i] ='0';
		character[i-1]  ++;

	}
}
