#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 9, i = 9;
	for (a = 1, i = -1; -3 < i < 2; i++)
	{//ÅÐ¶ÏË³ÐòÊÇ´ÓÇ°ÍùºóÅÐ¶Ï
		a++;
		printf("%d ", a);
	}
	printf("%d ", i);
}