#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
int main()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	};
	printf("%d\n", sizeof(struct S1));
	/*  c1 0  0  0
	    (   i    )
		c2 0  0  0
		3*4=12	  */
	struct S2
	{
		char c1;
		char c2;
		int i;
	};
	printf("%d\n", sizeof(struct S2));
	/*  c1 c2  0  0
	    (  i       )
	    2*4=8	  */
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3));
	/*  (d                )
	     c (i     )0 0 0 0
	2*8=16	  */
	struct S4
	{
		S1 r;
		int o;
	};
	printf("%d\n", sizeof(struct S4));
	// �ȼ���S1�еĴ�С  Ȼ����S1�����λ�������ִ�С 
	//12   +4
	struct S5
	{
		S2 r;
		int o;
	};
	printf("%d\n", sizeof(struct S5));
	//8+4
	struct S6
	{
		S3 r;
		int o;
	};
	printf("%d\n", sizeof(struct S6));
	//16+8   ����4��
	struct S7
	{
		S1 r;
		double o;
	};
	printf("%d\n", sizeof(struct S7));
	//�������Ŀ黮��
	return 0;
}