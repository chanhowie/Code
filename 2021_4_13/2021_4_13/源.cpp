#define _CRT_SECURE_NO_WARNINGS 1
//���������⣬�����Ӽ������ɶΣ�������γ˻����ֵ
#include<stdio.h>
#include <math.h>
int MaxproductAftercutting(int lon);
int main()
{
	int lon = 4;
	printf("%d\n", MaxproductAftercutting(lon));
	return 0;
}
int MaxproductAftercutting(int lon)
{
	if (lon < 2)
		return -1;
	if (lon == 2)
		return 1;
	if (lon == 3)
		return 2;
	int three = lon / 3;//3�ĸ���
	int mod = lon % 3;//����
	//����  ����Ϊ0��
	//���Ϊ2  ����2
	//���Ϊ1  ������1*3����2*2

	if (mod == 0)
		return  pow(3., three);
	if (mod == 2)
		return pow(3., three)*2;
	if (mod == 1)
		return pow(3., three-1)  * 4;

}