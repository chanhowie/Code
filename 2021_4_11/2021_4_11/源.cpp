#define _CRT_SECURE_NO_WARNINGS 1
//输入一段字符  替换其中的空格为%23
#include<stdio.h>
void find(char[], int size);
int main()
{
	char arr1[30] = { "1 1" };
	//	scanf("%s", &arr1);
	//	printf("\n%s", arr1);//   遇到空格会不能输入

	int size = sizeof(arr1) / sizeof(arr1[0]);
	find(arr1, size);

}
void find(char ch1[], int size)
{
	int i = size - 1;
	int  len = 0;//字符长度
	//	printf("\n%s\n", ch1);
	int count = 0;//空格数量
	while (i >= 0)
	{
		if (ch1[i] == ' ')
			count++;
		if (ch1[i] != 0)
			len++;
		i--;
	}

	//	printf("\ncount %d\n", count);
	//	printf("\nlen %d\n", len);
	if ((len + 2 * count)>size)
		printf("字符长度不足以显示\n");
	else
	{
		int comp = 0;
		i = len + 2 * count;


		for (; i >= len; i--)
			ch1[i] = ' ';
		i = len + 2 * count;

		ch1[i] = '\0';

		for (; i >= 0; i--)
		{
			//			printf("测试%s\n", ch1);//   遇到空格会不能输入
			if (ch1[i] == ' ')
			{
				ch1[i] = '0';
				ch1[i - 1] = '2';
				ch1[i - 2] = '%';
				i -= 2;
				comp++;
				if (comp == count)
					break;
			}
			ch1[i - 1] = ch1[len - 1];
			len--;
		}
		printf("输出结果为：\n%s\n", ch1);
	}
}