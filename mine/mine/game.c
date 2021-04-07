#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//创建棋盘
	char Board[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//初始化雷区
	InitBoard(Board, ROW, COL, '*');
	//初始化棋盘
	InitBoard(mine,ROW,COL,'0');
	//显示功能
	Show(Board, ROW, COL);//显示棋盘	
	//设置雷区
	SetMine(mine, ROW, COL, SMP);

	
	//输入坐标开始游戏
	Play(Board, mine, COL, COL);
}
void InitBoard(char Board[ROWS][COLS], int row, int col,char p)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j <COLS; j++)
		{
			Board[i][j] = p;
		}
	}
}
void Show(char Board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
		printf("%d ",i);
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col, int i)
{
	do {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			i--;
		}
	} while (i);
}
void Play(char Board[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	do{
		printf("输入坐标 x,y ->\n");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= ROW&&y > 0 && y <= COL)
			//显示周围数字
			if (mine[x][y] == '0')
			{
		//		char q = ShowNumber(mine, x, y);
		//		expand(Board[ROWS][COLS], mine[ROWS][COLS],  x,  y,q);				
				Board[x][y] = ShowNumber(mine, x, y);
				Show(Board, ROW, COL);
			}
			else
			{
				printf("被炸死了,游戏结束\n");
				Show(mine, ROW, COL);//显示棋盘
				break;
			}
		else
			printf("输入错误！\n");
	} while (1);
}
int ShowNumber(char mine[ROWS][COLS],int x,int y)
{
	return	 mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] -336	;

}
void expand(char Board[ROWS][COLS], char mine[ROWS][COLS], int x, int y,char q)
{

	if (q == 48);// 如果周围没有雷
	{
		
				Board[x - 1][y - 1] =mine[x - 1][y - 1];
				//Board[x-1][y] = ShowNumber(mine, x-1, y);
				//Board[x-1][y+1] = ShowNumber(mine, x-1, y+1);
				//Board[x][y] = ShowNumber(mine, x, y);
				//Board[x][y] = ShowNumber(mine, x, y);
				//Board[x][y] = ShowNumber(mine, x, y);
				//Board[x][y] = ShowNumber(mine, x, y);
				//Board[x][y] = ShowNumber(mine, x, y);
		//		expand(Board[ROWS][COLS], mine[ROWS][COLS], x, y);
			
	}
}