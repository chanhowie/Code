#define _CRT_SECURE_NO_WARNINGS 1
//  ��һ�������������    �����е�����������ż����ǰ��
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



	//��Ԫ��ָ��Ϊhead   βԪ��ָ��Ϊtail
	//�ж���ż��
	while (head < tail)//ͷ��ַС��β��ַ
	{
		if (*head % 2 == 0 && *tail % 2 == 1)//ǰż����
		{
			int tmp = *tail;
			*tail = *head;
			*head = tmp;
			head++;
			tail--;
		}
		else if (*head % 2 == 1 && *tail % 2 == 1)//ȫ��
			head++;
		else if (*head % 2 == 0 && *tail % 2 == 0)//ȫż
			tail--;
		else
		{
			tail--;
			head++;
		}
	}
}