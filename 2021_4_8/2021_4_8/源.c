#define _CRT_SECURE_NO_WARNINGS 1
//
//�ҳ��������ظ�������(һ��)
#include<stdio.h>
int FindNumber(int arr[],int* p,int sz);
int find_num2(int* arr, int size);
int main()
{
	int arr1[] = { 2,4,3,1,5,0,6};
	int* ch1 = &arr1;
	int size = sizeof(arr1) / sizeof(arr1[0]);	
	printf("ָ��%d\n", find_num2(ch1, size));
	printf("����%d\n", find_num2(arr1, size));
	return 0;
}
int find_num2(int *arr, int size) 
{
	if (arr == NULL || size <= 0)
		return -1;
	int i = 0;
	for (; i < size; i++)
	{
		if (arr[i] < 0 || arr[i] >= size)
			return -1;
	}
	for (i = 0; i < size; i++)
	{
		while (arr[i] != i)//ÿһ���������1�������Σ����Ժ��Ը��Ӷ�
		{
			if (arr[i] == arr[arr[i]])
				return arr[i];
			int tmp = arr[i];
			arr[i] = arr[tmp];
			arr[tmp] = tmp;
		}
	}
	return -1;
}
int FindNumber(int arr1[], int size)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < size; i++)
	{
		while (arr1[i] != i)
		{
			if (arr1[tmp] == arr1[i])
				return arr1[i];//������ͬ��
			tmp = arr1[i];
			arr1[i] = arr1[tmp];
			arr1[tmp] = tmp;
		}
	}
	return -1;
}