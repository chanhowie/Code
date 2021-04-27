#define _CRT_SECURE_NO_WARNINGS 1
//½á¹¹Ìå
#include <stdio.h>
struct student
{
	int arr[30];
	int head = 0;
	int tail = 0;
};
int main()
{
	struct student chen;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &chen.arr[chen.tail]);
		chen.tail++;
	}
	//for (i = 0; i < 10; i++)
	//	chen.arr[i] = { i};

	for (i = 0; i < 10; i++)
	{
		printf("%d ", chen.arr[chen.head]);
		chen.arr[chen.tail] = chen.arr[chen.head];
		chen.tail++;
		chen.head++;
	}
	return 0;
}#define _CRT_SECURE_NO_WARNINGS 1