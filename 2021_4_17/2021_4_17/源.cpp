#define _CRT_SECURE_NO_WARNINGS 1
//�жϳ����������ڴ�洢��ʽ��С��
#include <stdio.h>
bool check();
int main()
{
	if (check())//�������1С�˴洢
		printf("С�˴���\n");
	else 
		printf("��˴���\n");
	return 0;
}
bool check()
{
	int i = 0; //00000000 00000000 00000000 00000001
	return *(char*)&i;//��ָ��ĵ�ַ���н����÷��ص�һλ
}