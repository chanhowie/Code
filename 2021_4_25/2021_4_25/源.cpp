#define _CRT_SECURE_NO_WARNINGS 1
//输入数据个数以及数据   输出排序后并且（唯一）数据
#include <stdio.h>
int main()
{
	int num = 5;//要输入数据的个数
	scanf("%d",&num);
	printf("数据范围：0<x<100\n");
	int i = 0;
	int k = 0;//不重复个数
	int arr1[20] = {5,1,6,8,5};
	for (i = 0; i < num; i++)
		scanf("%d", &arr1[i]);
	//修改后的桶排序
	int bucket[100] = { 0 };
	for (i = 0; i < num; i++)
		if (arr1[i] != 0)
		{
			if (bucket[arr1[i]] != 1)
				k++;
			bucket[arr1[i]] = 1;
		}

	printf("一共有%d个数据\n", k);

	for (i = 0; i < 100; i++)
		if (bucket[i] != 0)
			printf("%d ", i);


	return 0;
}