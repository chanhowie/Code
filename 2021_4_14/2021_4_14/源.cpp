#define _CRT_SECURE_NO_WARNINGS 1
//变量1与变量2不借助其他变量完成相互交换
#include <stdio.h>
void Exchange(int* var_1,int* var_2);
void Exchange_1(int* var_3, int* var_4);
int main()
{
	int variate_1 = 5;
	int variate_2 = 7;
	printf("variate_1=%d  variate_1=%d\n", variate_1, variate_2);
	Exchange(&variate_1, &variate_2);
	printf("variate_1=%d  variate_1=%d\n", variate_1, variate_2);
	Exchange_1(&variate_1, &variate_2);
	printf("variate_1=%d  variate_1=%d\n", variate_1, variate_2);
	return 0;
}
void Exchange(int* var_1, int* var_2)//可能会溢出
{
	//二进制中  a=a+b
	//          b=a-b
	//          a=a-b
	*var_1 = *var_1 + *var_2;
	*var_2 = *var_1 - *var_2;
	*var_1 = *var_1 - *var_2;
}
void Exchange_1(int* var_3, int* var_4)
{
	*var_3 = *var_3^*var_4;
	*var_4 = *var_3^*var_4;
	*var_3 = *var_3^*var_4;
}