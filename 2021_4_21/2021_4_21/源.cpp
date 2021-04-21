#define _CRT_SECURE_NO_WARNINGS 1
//环绕打印数组
#include<stdio.h>
#define ROW 3//共有多少行
#define COL 3//共有多少列
void arrprintf(int *, int, int);
int* createarr();
int main()
{
	int *arr =createarr();
	printf("传参前地址为 %p ,值为 %d \n", arr, *arr);	
	arrprintf(arr,COL,ROW);//开始传参 进行打印
	return 0;
}
int* createarr()
{
	int i = 0, j = 0, k = 1;
	static int arr1[COL][ROW] = { 0 };//定义成 static 保证不被销毁
	for (i = 0; i < COL; i++)//初始化数组
		for (j = 0; j < ROW; j++, k++)
			arr1[i][j] = k;
	i = 0;
	for (i = 0; i < 14; i++)//测试打印
	{
		printf("%d   ",*(&arr1[0][0]+i));
	}
	printf("\n");
	return &arr1[0][0];//返回数组地址
}
void arrprintf(int *arr1, int col, int row)
{
	printf("传参后地址为 %p ,值为 %d \n ", arr1, *arr1);
	int start=1;
	//打印一圈
	while (start*2 <row  &&start*2 < col)//打印圈数
	{
	//	printcirle(col,row);  打印功能      缺陷  ：三行两列时，不能正确识别
		printf("可以打印%d圈\n  ", start);
		start++;
	}

	int y = ROW;
	printf("\n\n\n%d \n ", *(arr1 + 2  ));


}