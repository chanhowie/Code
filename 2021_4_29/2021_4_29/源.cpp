#define _CRT_SECURE_NO_WARNINGS 1
//����ָ���ʶ
#include<stdio.h>
int ADD(int x, int y)
{
	int z = x + y;
	return  z;
}
int main()
{
	int x = 20, y = 30;
	printf("%d\n",ADD(x, y));
	int(*p)(int ,int) = &ADD;//����һ��ֻ�뺯����ָ��
	printf("%d\n", (*p)(60,50));//ͨ����ָ����ָ�����ĵ�ַ���Ӷ�����
	return 0;
}