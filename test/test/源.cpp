#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
bool Serch(int QR[4][5],int number);
int main()//找出二维数组中是否存在一个数字。
{
	int	a;
	int QR[4][5] = {
		{ 1, 3, 5, 6, 10 },
		{ 2, 4, 6, 8, 11 },
		{ 3, 4, 8, 9, 13 },
		{ 4, 5, 9, 10, 15 } };
	int q= Serch(QR, 9);
	printf("%d", q);
}
bool Serch(int QR[4][5],int number)
{
	int row = 0, col = 4;
	while (1)
	{
		if (QR[row][col] == number)
		{
			return true;
		}
		else
		{
			if (QR[row][col] > number)
			{
				col--;
			}
			else if (QR[row][col] < number)
			{
				row++;
			}
		}
		if (row > 3)
		{
			return false;
		}

	}
	return false;
}