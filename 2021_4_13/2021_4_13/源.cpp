#define _CRT_SECURE_NO_WARNINGS 1
//剪绳子问题，将绳子剪成若干段，求出各段乘积最大值
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
	int three = lon / 3;//3的个数
	int mod = lon % 3;//余数
	//最优  余数为0，
	//如果为2  最后乘2
	//如果为1  把最后的1*3换成2*2

	if (mod == 0)
		return  pow(3., three);
	if (mod == 2)
		return pow(3., three)*2;
	if (mod == 1)
		return pow(3., three-1)  * 4;

}