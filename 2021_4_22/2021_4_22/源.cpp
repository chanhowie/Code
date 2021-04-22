#define _CRT_SECURE_NO_WARNINGS 1
//打印出来数组中出现超过数组数目一半的数字
#include <stdio.h>
int FindNumber(int*, int);
int main()
{
	int arr[11] = { 5, 5, 1, 5, 5, 5, 5, 4, 4, 4, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int num=FindNumber(arr,size);
	printf("%d", num);
	return 0;
}
int FindNumber(int* arr, int size)
{
	if (arr == NULL)
		return 0;
	int number=-1,times=1; //
	int i = 0;
	for (i; i < size; i++)
	{
		if (*(arr + i) != number)
			if (times == 1)
				number = *(arr + i);
			else
				times--;
		else times++;
	}
	return number;
}
