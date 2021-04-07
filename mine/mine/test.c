#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
/*	int a = -2, b = 0;
	while (a++&&++b)
	printf("%d %d\n",a,b);
	printf("最终%d %d\n", a, b);*/
	
	srand((unsigned int)time(NULL));
	int input;
	do{
		printf("******************************\n");
		printf("***** Enter 1 to play ********\n");
		printf("***** Enter 0 to quit ********\n");
		printf("******************************\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("\n*********Quit the game********\n\n");
			break;
		case 1:  // 进入游戏入口
			game();
			break;
		default:
			printf("*********Input error**********\n\n");
			break;
		}
	} while (input);
}