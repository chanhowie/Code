#include "head.h"
int main()
{
	int a;
	char data[HAN][SHU] = { 0 };    //��������
	Init_Game(data, HAN, SHU);    //��ʼ��
	do
	{
		printf("play ->1     exit->0\n");
		scanf("%d",&a);
		switch (a)
		{
		case 0:
			printf("Bye...\n");
			break;
		case 1:
			game(data,HAN ,SHU);
		default:
			printf("error!\n");
		}
	} while(a!=0);
	return 0;
}
void game(char data[HAN][SHU], int x, int y)
{
	while (1)
	{
		player(data, HAN, SHU);
	//	ai(data, HAN, SHU);
	}
}
void chess(char data[HAN][SHU], int i, int j)
{//j ��Ӧ��
	//i��Ӧ��
	j = 0;
	for (j = 0; j < SHU; j++)
	{
		for (i = 0; i < HAN; i++)
		{
			printf(" %c ", data[j][i]);

			if (i < HAN - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		if (j < SHU - 1)
		{

			for (i = 0; i < HAN; i++)
			{
				printf("---");
				if (i < HAN - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}

}
void Init_Game(char data[HAN][SHU], int i, int j)
{
	for (i = 0; i < HAN; i++)
	{
		for (j = 0; j < SHU; j++)
			data[i][j] = ' ';
	}

}
void player(char data[HAN][SHU], int i, int j)
{
	int x = 0, y = 0;	//x��     y��
	chess(data, HAN, SHU);
	do{
		printf("��������->  ��  , ��");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= HAN&&y>0 && y <= SHU)
		{
			if (data[x - 1][y - 1] == ' ')
			{
				data[x - 1][y - 1] = 'o';
				//	system("cls");
				break;
			}
			else
				printf("���λ���Ѿ�������\n");
		}
		else
			printf("���뷶Χ����\n");

	} while (!(x>0 && x <= HAN&&y>0 && y <= SHU));
}

void ai(char data[HAN][SHU], int i, int j)
{
	int x = 0, y = 0;	//x��     y��
	system("cls");
	chess(data, HAN, SHU);
	printf("ai����˼��...\n");
	//��������� i,j����
	while (1)
	{
		srand((unsigned)time(NULL));
		x = rand()%HAN;
		y = rand()%SHU;
		if (data[y - 1][x - 1] == ' ')
		{
			data[y - 1][x - 1] = 'x';
			break;
		}
	}
}
