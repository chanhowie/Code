#define _CRT_SECURE_NO_WARNINGS 1
//c语言中优先级
#include <stdio.h>
int main()
{
	int a = 5, b = 7, c;
	//c = a+++++b;
	//c = a++ ++ + b;上一行代码会被内翻译成此行代码  
	//    这里↗++优先级比较高 会检查左边 式子（++）  发现不是变量  检测右边发现是+b 所以无法编译  
	//    优先匹配尽可能多字符的符号，无论是否有语法错误   贪婪匹配原则
	//c = (a++) + (++b);  ← 要表达这个意思 需要加括号
	//c = a+++ (++b);       //或者后面加括号 让第3个+号不能与左括号匹配  
	//c = ((a++)++) + b;  a存在左值   可以使用a++    (a++)不存在左值   不能使用(a++)++   

	//c = (++a, b++, a++, ++b);
	c = (++a, b++, a++, b++);//与上一行区别是  最后的b是调用后才加1   所以最后b的值为8时赋给了c    最后b为9
	printf("a = %d,b = %d,c = %d", a, b, c);

	return 0;
}
