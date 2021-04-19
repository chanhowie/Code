#define _CRT_SECURE_NO_WARNINGS 1
//  对一个数组进行排序    将所有的奇数放置在偶数的前面
#include <stdio.h>
void sequence(int[],int );
int main()
{
	int arr1[10] = {3,1,6,2,7,8,4,9,5,0};

	int size = sizeof(arr1) / sizeof(arr1[0]);
	sequence(arr1,size);
	return 0;
}
void sequence(int* head,int size)
{
	int* tail=head+size-1;



	//首元素指针为head   尾元素指针为tail
	//判断奇偶数
	while (head < tail)//头地址小与尾地址
	{
		if (*head % 2 == 0 && *tail % 2 == 1)//前偶后奇
		{
			int tmp = *tail;
			*tail = *head;
			*head = tmp;
			head++;
			tail--;
		}
		else if (*head % 2 == 1 && *tail % 2 == 1)//全奇
			head++;
		else if (*head % 2 == 0 && *tail % 2 == 0)//全偶
			tail--;
		else
		{
			tail--;
			head++;
		}
	}
}