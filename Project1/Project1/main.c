#include "head.h"
int main()
{
	int a;
	char data[HAN][SHU] = { 0 };    //定义棋盘
	Init_Game(data, HAN, SHU);    //初始化
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
{//j 对应行
	//i对应列
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
	int x = 0, y = 0;	//x行     y列
	chess(data, HAN, SHU);
	do{
		printf("输入坐标->  行  , 列");
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
				printf("这个位置已经有棋子\n");
		}
		else
			printf("输入范围错误\n");

	} while (!(x>0 && x <= HAN&&y>0 && y <= SHU));
}

void ai(char data[HAN][SHU], int i, int j)
{
	int x = 0, y = 0;	//x行     y列
	system("cls");
	chess(data, HAN, SHU);
	printf("ai正在思考...\n");
	//随机数生成 i,j坐标
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
