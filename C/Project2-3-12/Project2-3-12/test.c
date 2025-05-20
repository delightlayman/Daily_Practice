#define _CRT_SECURE_NO_WARNINGS 1
//1. 写出主函数（main主函数）
//函数会带小括号
//2019版本空项目或控制台皆可，不过最好空项目


//
#include <stdio.h>
//int main()
//{
//	printf("yuxiaan\n");
//
//	return(0);
//}
//数据类型
//小数点在科学计数法下，可以在数字间浮动，故小数在C语言也称浮点数
//字符---单引号引用
//sizeof的单位为字节
//长度 sizeof（long）>=sizeof（int）
//数据类型用于创建变量
//创建变量时 推荐赋值 不赋值只是合乎标准
//函数体内（大括号内）-局部变量 函数体外（大括号外）-全局变量
//全-局冲突，局部优先
//sacnf_s函数，由VS编译器提供，非C语言标准规定的。
//scanf_s故此函数只能在VS编译器运行，其他编译器无法运行。


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}