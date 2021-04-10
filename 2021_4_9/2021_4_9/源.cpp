#define _CRT_SECURE_NO_WARNINGS 1
//找出数组中重复的数字，但是不改变原数组内容
#include<stdio.h>
int FindNumber(int ch1[], int size);
int main()
{
	int arr1[] = { 2,1,6,1,4,3,5};//数组长度7   只允许出现1-6中的数字
	int size = sizeof(arr1) / sizeof(arr1[0]);
	int receive = FindNumber(arr1, size);
	printf("receive = %d", receive);
	return 0;
}
int FindNumber(int ch1[],int size)
{
	int i = 0;    //计数首
	int min = ch1[0];
	int max = ch1[0];
	for (i = 0; i < size; i++)//找出最小数  最大数
	{
		if (ch1[i]>max)
			max=ch1[i];
		if (ch1[i]<min)
			min = ch1[i];
	}
	if (min<1||max > size - 1)
		return -1;//数组错
//	printf("max %d   min %d", max, min); 
	int middle = (max+min) / 2;//中位数
	int count = 0;
	int all = 0;
	//遍历中位数以前的数字总个数
	while (min != max)
	{
		count = 0;
		all = 0;
		for (i = 0; i < size; i++)
		{
			if (ch1[i] >= min&&ch1[i] <= max)
			{
				all++;
				if (ch1[i] <= middle)
					count++;//
			}
		}
		if (count >(all-count))//只看前面
		{
			max = middle;
			middle = (middle + min) / 2;
		}
		else//出现在后面		
		{
			min = middle + 1;
			middle = (middle+1 + max) / 2;
		}
		//一次循环
	}
	return min;
}