#define _CRT_SECURE_NO_WARNINGS 1
#define LON 6

//����һ�����׾���  ���մ���Ȧ����Ȧ˳���ӡ����
#include<stdio.h>
void ArrayPrint(int*,int);
int main()
{
	int a[LON][LON] = { 0 };
	int i = 0,k=1;
	for (i = 0; i < LON; i++)//����ά���鸳ֵ
	{
		for (int j = 0; j < LON; j++)
		{
			a[i][j] = k;
			k++;
		}
	}
	ArrayPrint(a[0],LON); //���Σ�����
	return 0;
}
void ArrayPrint(int* arr,int len)//arr�������Ԫ�ص�ַlen
{
	//��ӡ��һ��                                                    
	int i = 0;                

	
		for (i = 0; i < len; i++)
			printf("%d ", *arr + i);
		//��ӡ���һ��
		for (i = len; i < len*len; i = i + len)
			printf("%d ", *arr + len - 1 + i);
		//���Ŵ�ӡ���һ��                                
		for (i = len*len - 2; i >= len*(len - 1); i--)
			printf("%d ", *arr + i);
		//���Ŵ�ӡ��һ��                                   
		for (i = len*(len - 2); i>0; i = i - len)
			printf("%d ", *arr + i);
		
}