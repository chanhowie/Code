#define _CRT_SECURE_NO_WARNINGS 1
//�������ݸ����Լ�����   ���������ң�Ψһ������
#include <stdio.h>
int main()
{
	int num = 5;//Ҫ�������ݵĸ���
	scanf("%d",&num);
	printf("���ݷ�Χ��0<x<100\n");
	int i = 0;
	int k = 0;//���ظ�����
	int arr1[20] = {5,1,6,8,5};
	for (i = 0; i < num; i++)
		scanf("%d", &arr1[i]);
	//�޸ĺ��Ͱ����
	int bucket[100] = { 0 };
	for (i = 0; i < num; i++)
		if (arr1[i] != 0)
		{
			if (bucket[arr1[i]] != 1)
				k++;
			bucket[arr1[i]] = 1;
		}

	printf("һ����%d������\n", k);

	for (i = 0; i < 100; i++)
		if (bucket[i] != 0)
			printf("%d ", i);


	return 0;
}