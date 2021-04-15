#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//不使用库函数，求出x的y次方,不需要考虑大数
int pow_1(int base, int index);//没有考虑 指数为0或者负数的情况
double pow_2(double base, int index);//效率一般
double pow_3(double base, int index);//效率比较高
double calc(double base, int index); 
double calc_1(double base, int index);//测试
int main()
{
	
	printf("%f", calc_1(3, 3));
	return 0;
}
int pow_1(int base,int index)
{
	int answer = 1;
	for (; index > 0; index--)
		answer *= base;
	return answer;
}
double pow_2(double base, double index)
{
	short sign = 0;
	double answer = 1.0;
	if (index == 0)
		return 1;
	if (index < 0)
	{
		sign = 1;
		index = -index;
	}
	for (; index > 0; index--)
		answer *= base;
	if (sign == 1)
		answer = 1 / answer;
	return answer;
}
double pow_3(double base, int index)
{
	bool sign = 0;//正负数判断     0为正数
	double answer = 1.0;
	if (index == 0)
		return 1;
	if (index < 0)
	{
		sign = 1;
		index = -index;
	}

	answer = calc(base, index);

	if (sign == 1)
		answer = 1 / answer;
	return answer;
}
double calc(double base, int index)
{
	if (index == 1)
		return base;
	if (index == 0)
		return 1;
	
	double number = calc(base, index>>1);
	number *= number;
	if (index & 0x1 == 1)
		number *= base;
	return number;

}
double calc_1(double base, int index)
{	
	if (index == 1)
		return base;
	double number = calc_1(base, index/2);//除以二递归
	number *= number;
	if (index % 2 == 1)
	{
		number *= base;
		printf("奇数");
	}
	return number;

}