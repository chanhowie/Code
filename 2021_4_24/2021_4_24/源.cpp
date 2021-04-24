#define _CRT_SECURE_NO_WARNINGS 1
 //桶排序 优点   速度快   
//    缺点   不能处理非整数   而且占的内存取决于最大的那个数
#include <stdio.h>
int main()
{
	int data[9] = { 1, 5, 1, 3, 5, 5, 4, 2, 6 };
	int bucket[10] = {0};
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		bucket[data[i]]++;
	}
	i = 0;
	for (i = 0; i < 9; i++)
	{
		if (bucket[i] != 0)
			for (bucket[i]; bucket[i]>0; bucket[i]--)
				printf("%d ", i);	
	}

	return 0;
}