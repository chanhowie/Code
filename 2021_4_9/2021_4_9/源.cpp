#define _CRT_SECURE_NO_WARNINGS 1
//�ҳ��������ظ������֣����ǲ��ı�ԭ��������
#include<stdio.h>
int FindNumber(int ch1[], int size);
int main()
{
	int arr1[] = { 2,1,0,3,3,4,5};
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
	if (max > size - 2)
		return -1;//�����
//	printf("max %d   min %d", max, min); 

	int middle = (max+min) / 2;//��λ��
	int count = 0;
	//������λ����ǰ�������ܸ���
	for (i = 0; i < size; i++)
	{
		if (ch1[i] <= middle)
			count++;
	}
	if (count <(size-middle))//��������λ��ǰ�벿��
		middle = (i+middle)/2;//��ѯǰ�벿��

	else
		i = middle;
	return 0;
}