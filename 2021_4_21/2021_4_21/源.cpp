#define _CRT_SECURE_NO_WARNINGS 1
//���ƴ�ӡ����
#include<stdio.h>
#define ROW 3//���ж�����
#define COL 3//���ж�����
void arrprintf(int *, int, int);
int* createarr();
int main()
{
	int *arr =createarr();
	printf("����ǰ��ַΪ %p ,ֵΪ %d \n", arr, *arr);	
	arrprintf(arr,COL,ROW);//��ʼ���� ���д�ӡ
	return 0;
}
int* createarr()
{
	int i = 0, j = 0, k = 1;
	static int arr1[COL][ROW] = { 0 };//����� static ��֤��������
	for (i = 0; i < COL; i++)//��ʼ������
		for (j = 0; j < ROW; j++, k++)
			arr1[i][j] = k;
	i = 0;
	for (i = 0; i < 14; i++)//���Դ�ӡ
	{
		printf("%d   ",*(&arr1[0][0]+i));
	}
	printf("\n");
	return &arr1[0][0];//���������ַ
}
void arrprintf(int *arr1, int col, int row)
{
	printf("���κ��ַΪ %p ,ֵΪ %d \n ", arr1, *arr1);
	int start=1;
	//��ӡһȦ
	while (start*2 <row  &&start*2 < col)//��ӡȦ��
	{
	//	printcirle(col,row);  ��ӡ����      ȱ��  ����������ʱ��������ȷʶ��
		printf("���Դ�ӡ%dȦ\n  ", start);
		start++;
	}

	int y = ROW;
	printf("\n\n\n%d \n ", *(arr1 + 2  ));


}