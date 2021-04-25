#define _CRT_SECURE_NO_WARNINGS 1
//¿ìËÙÅÅĞò
#include <stdio.h>
void quick_sort(int[],int ,int );
int main()
{
	int data[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	quick_sort(data,0,9);
	return 0;
}
void quick_sort(int s[], int left, int right)
{
	if (left < right)
	{
		int i = left, j = right, x = s[left];
		while (i < j)
		{
			while (i < j && s[j] >= x) 
				j--;
			if (i < j)
				s[i++] = s[j];

			while (i < j && s[i] < x) 
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quick_sort(s, left, i - 1);
		quick_sort(s, i + 1, right);
	}

}