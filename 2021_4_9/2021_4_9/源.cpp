#define _CRT_SECURE_NO_WARNINGS 1
//�ҳ��������ظ������֣����ǲ��ı�ԭ��������
#include<stdio.h>
int FindNumber(int ch1[], int size);
int main()
{
	int arr1[] = { 2,1,6,1,4,3,5};//���鳤��7   ֻ�������1-6�е�����
	int size = sizeof(arr1) / sizeof(arr1[0]);
	int receive = FindNumber(arr1, size);
	printf("receive = %d", receive);
	return 0;
}
int FindNumber(int ch1[],int size)
{
	int i = 0;    //������
	int min = ch1[0];
	int max = ch1[0];
	for (i = 0; i < size; i++)//�ҳ���С��  �����
	{
		if (ch1[i]>max)
			max=ch1[i];
		if (ch1[i]<min)
			min = ch1[i];
	}
	if (min<1||max > size - 1)
		return -1;//�����
//	printf("max %d   min %d", max, min); 
	int middle = (max+min) / 2;//��λ��
	int count = 0;
	int all = 0;
	//������λ����ǰ�������ܸ���
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
		if (count >(all-count))//ֻ��ǰ��
		{
			max = middle;
			middle = (middle + min) / 2;
		}
		else//�����ں���		
		{
			min = middle + 1;
			middle = (middle+1 + max) / 2;
		}
		//һ��ѭ��
	}
	return min;
}