#define _CRT_SECURE_NO_WARNINGS 1
#define LON 6

//输入一个二阶矩阵  按照从外圈到内圈顺序打印出来
#include<stdio.h>
void ArrayPrint(int*,int);
int main()
{
	int a[LON][LON] = { 0 };
	int i = 0,k=1;
	for (i = 0; i < LON; i++)//给二维数组赋值
	{
		for (int j = 0; j < LON; j++)
		{
			a[i][j] = k;
			k++;
		}
	}
	ArrayPrint(a[0],LON); //传参！！！
	return 0;
}
void ArrayPrint(int* arr,int len)//arr数组的首元素地址len
{
	//打印第一行                                                    
	int i = 0;                

	
		for (i = 0; i < len; i++)
			printf("%d ", *arr + i);
		//打印最后一列
		for (i = len; i < len*len; i = i + len)
			printf("%d ", *arr + len - 1 + i);
		//倒着打印最后一行                                
		for (i = len*len - 2; i >= len*(len - 1); i--)
			printf("%d ", *arr + i);
		//倒着打印第一列                                   
		for (i = len*(len - 2); i>0; i = i - len)
			printf("%d ", *arr + i);
		
}