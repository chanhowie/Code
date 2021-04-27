#define _CRT_SECURE_NO_WARNINGS 1
//数组中 传参的方式
//数组的形式以及指针的形式
#include<stdio.h>
void print1(int [3][4]);//数组的形式
void print2(int(*p)[4]);//指针的形式
int main()
{
	int arr[3][4] = { { 1, 2, 3, 4 },{2, 3, 4, 5},{3, 4, 5, 6} };
	print1(arr);
	print2(arr);
	return 0;
}
void print1(int arr[3][4])
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
void print2(int(*p)[4])
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ",*(*(p+i)+j));
		printf("\n");
	}
}