#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	struct student
	{
		long int num;
		char name[20];
		float score;
	}student1, student2;
	
	printf("请输入第一个学生的学号，姓名，成绩：\n");//这里第一个是学号
	scanf("%d %s %f", &student1.num, student1.name, &student1.score);//这里要加&
	printf("请输入第二个学生的学号，姓名，成绩：\n");
	scanf("%d %s %f", &student2.num, student2.name, &student2.score);
	if (student1.score >= student2.score)//当学生1成绩大于或者等于学生2 
		if (student1.score>student2.score)  //当学生1成绩大于学生2
			printf("学号：%d 姓名：%s 成绩：%6.2f\n", student1.num, student1.name, student1.score);
		else//学生1成绩等于学生2成绩   同时输出学生1和2
		{
			printf("学号：%d 姓名：%s 成绩：%6.2f\n", student1.num, student1.name, student1.score);
			printf("学号：%d 姓名：%s 成绩：%6.2f\n", student2.num, student2.name, student2.score);

		}

	else//当学生2成绩大于学生1
		printf("学号：%d 姓名：%s 成绩：%6.2f\n", student2.num, student2.name, student2.score);


	return 0;
}


