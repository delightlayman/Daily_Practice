#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <limits.h>//提供CHAR_BIT等定义,CHAR_BIT定义了char类型所占的位数




////使用位操作显示二进制
//char* itobs(int, char*);
//void show_bstr(const char*);
//
//
//int main(void)
//{
//	char bin_str[CHAR_BIT * sizeof(int) + 1];
//	int number;
//
//	puts("Enter integer and see them in binary.");
//	puts("Non-numeric input terminates program.");
//
//	while (scanf("%d", &number) == 1)
//	{
//		itobs(number, bin_str);
//		printf("%d is ", number);
//		show_bstr(bin_str);
//		putchar('\n');
//
//	}
//	puts("Bye!");
//
//
//	return 0;
//}
//
//char* itobs(int n, char* ps)
//{
//	int i;
//	const static int size = CHAR_BIT * sizeof(int);
//
//	for(i=size-1;i>=0;i--,n>>=1)
//		ps[i] = (01 & n) + '0';
//	ps[size] = '\0';
//
//	return ps;
//
//}
//
//
//
////四位一组显示二进制字符串
//void show_bstr(const char* str)
//{
//	int i=0;
//
//	while (str[i])
//	{
//		putchar(str[i]);
//		if (++i % 4 == 0&&str[i])
//			putchar(' ');
//	}
//
//
//
//}



//
//
////使用位操作显示二进制，并处理后n位
//char* itobs(int, char*);
//void show_bstr(const char*);
//int invert_end(int, int);
//
//
//int main(void)
//{
//	char bin_str[CHAR_BIT * sizeof(int) + 1];
//	int number;
//
//	puts("Enter integer and see them in binary.");
//	puts("Non-numeric input terminates program.");
//
//	while (scanf("%d", &number) == 1)
//	{
//		itobs(number, bin_str);
//		printf("%d is\n", number);
//		show_bstr(bin_str);
//		putchar('\n');
//		
//		number = invert_end(number,4);
//		printf("Inverting the last four bits gives\n");
//		show_bstr(itobs(number, bin_str));
//		putchar('\n');
//
//
//	}
//	puts("Bye!");
//
//
//	return 0;
//}
//
//char* itobs(int n, char* ps)
//{
//	int i;
//	const static int size = CHAR_BIT * sizeof(int);
//
//	for (i = size - 1; i >= 0; i--, n >>= 1)
//		ps[i] = (01 & n) + '0';
//	ps[size] = '\0';
//
//	return ps;
//
//}
//
//
//
////四位一组显示二进制字符串
//void show_bstr(const char* str)
//{
//	int i = 0;
//
//	while (str[i])//非空字符
//	{
//		putchar(str[i]);
//		if (++i % 4 == 0 && str[i])
//			putchar(' ');
//	}
//
//
//
//}
//
//
//int invert_end(int num, int bits)
//{
//	int mask = 0;
//	int bitval = 1;
//
//	while (bits-- > 0)
//	{
//		mask|= bitval;
//		bitval <<= 1;
//	}
//	return num^mask;
//}
//





////定义并使用位字段
//#include <stdbool.h>
//
////线的样式
//#define SOLID 0
//#define DOTTED 1
//#define DASHED 2
//
////三原色
//#define RED 1
//#define GREEN 2
//#define BLUE 4	
////混合颜色
//#define BLACK 0
//#define YELLOW (RED|GREEN)
//#define MAGENTA (RED|BLUE)//阳紫/品红
//#define CYAN (GREEN|BLUE)//青色
//#define WHITE (RED|GREEN|BLUE)
//
//const char* colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};
//
//struct box_props {
//	bool opaque : 1;//C99
//	unsigned int fill_color : 3;
//	unsigned int : 4;//空隙
//
//	bool show_border : 1;//C99
//	unsigned int border_color : 3;
//	unsigned int border_style : 2;
//	unsigned int : 2;//空隙
//};
//
//
//
//void show_settings(const struct box_props* pb);
//
//int main(void)
//{
//	//初始化box_props结构------初步选定方框样式
//	struct box_props box={true,YELLOW,true,GREEN,DASHED};
//
//	printf("Original box settings:\n");
//	show_settings(&box);
//
//	box.opaque = false;
//	box.fill_color = WHITE;
//	box.border_color = MAGENTA;
//	box.border_style = SOLID;
//	printf("\nModified box settings:\n");
//	show_settings(&box);
//
//
//	return 0;
//}
//
//
//
//void show_settings(const struct box_props* pb)
//{
//	printf("Box is %s.\n",pb->opaque==true? "opaque" : "transparent");
//	printf("The fill color is %s.\n", colors[pb->fill_color]);
//	printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
//	printf("The border color is %s.\n", colors[pb->border_color]);
//	printf("The border style is ");
//	switch (pb->border_style)
//	{
//		case SOLID:printf("solid.\n"); break;
//		case DOTTED:printf("dotted.\n"); break;
//		case DASHED:printf("dashed.\n"); break;
//		default:printf("unknown type.\n");
//	}
//
//
//}




//位字段和按位运算符
#include <stdbool.h>

//线的样式
#define SOLID 0
#define DOTTED 1
#define DASHED 2

//三原色
#define RED 1
#define GREEN 2
#define BLUE 4	
//混合颜色
#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)//阳紫/品红
#define CYAN (GREEN|BLUE)//青色
#define WHITE (RED|GREEN|BLUE)

//按位方法用到的符号常量
#define OPAQUE 0x1
#define FILL_BLUE 0x8
#define FILL_GREEN 0x4
#define FILL_RED 0x2
#define FILL_MASK 0xE

#define BORDER 0x100
#define BORDER_BLUE 0x800
#define BORDER_GREEN 0x400
#define BORDER_RED 0x200
#define BORDER_MASK 0xE00

#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define STYLE_MASK 0x3000


const char* colors[8] = { "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white" };

struct box_props {
	bool opaque : 1;//C99
	unsigned int fill_color : 3;
	unsigned int : 4;//空隙

	bool show_border : 1;//C99
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 2;//空隙
};

union View {   //数据为结构或变量
	struct box_props st_view;
	unsigned short us_view;//错用为unsigned int
};



void show_settings(const struct box_props* pb);
void show_settings1(unsigned int);
char *itobs(int, char*);


int main(void)
{
	//创建联合变量并初始化
	union View box = {{ true,YELLOW,true,GREEN,DASHED }};
	char bin_str[8 * sizeof(unsigned int) + 1];

	printf("Original box settings:\n");
	show_settings(&box.st_view);


	printf("\nBox settings using unsigned int view:\n");
	show_settings1(box.us_view);

	printf("Bit are %s\n",itobs(box.us_view, bin_str));


	box.us_view &= ~FILL_MASK;//填充颜色位清0
	box.us_view |= (FILL_BLUE | FILL_GREEN);//重置填充色
	box.us_view ^= OPAQUE;//切换是否透明的位

	box.us_view |= BORDER_RED;//错误的方法
	box.us_view &= ~STYLE_MASK;//样式位清零
	box.us_view |= B_DOTTED;//样式位设置为点样式

	printf("\nModified box settings:\n");
	show_settings(&box.st_view);
	printf("\nBox settings using unsigned int view:\n");
	show_settings1(box.us_view);
	printf("Bit are %s\n", itobs(box.us_view, bin_str));

	//测试
	box.st_view.opaque = false;
	box.st_view.fill_color = WHITE;
	box.st_view.show_border = true;
	box.st_view.border_color = MAGENTA;
	box.st_view.border_style = SOLID;

	printf("\nModified box settings:\n");
	show_settings(&box.st_view);
	printf("\nBox settings using unsigned int view:\n");
	show_settings1(box.us_view);
	printf("Bit are %s\n", itobs(box.us_view, bin_str));


	return 0;
}



void show_settings(const struct box_props* pb)
{
	printf("Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[pb->fill_color]);
	printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[pb->border_color]);
	printf("The border style is ");
	switch (pb->border_style)
	{
	case SOLID:printf("solid.\n"); break;
	case DOTTED:printf("dotted.\n"); break;
	case DASHED:printf("dashed.\n"); break;
	default:printf("unknown type.\n");
	}


}

void show_settings1(unsigned int us)
{
	printf("Box is %s.\n", (us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[(us >> 1) & 07]);//访问并获取位值的方式一
	printf("Border %s.\n", (us & BORDER) == BORDER ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[(us >> 9) & 07]);//  us&0x0e00   访问并获取位值的方式二      错误：us>>9少了括号
	printf("The border style is ");
	switch (us & STYLE_MASK)
	{
	case B_SOLID:printf("solid.\n"); break;
	case B_DOTTED:printf("dotted.\n"); break;
	case B_DASHED:printf("dashed.\n"); break;
	default:printf("unknown type.\n");
	}
}

char* itobs(int n, char* ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (01 & n) + '0';
	ps[size] = '\0';

	return ps;

}


////取反验证
//char* itobs(int, char*);
//
//
//int main(void)
//{
//	int i = 111;
//	char k[8 * sizeof(int) + 1];
//
//	itobs(i, k);
//	printf("%s\n", k);
//	itobs(~i, k);
//	printf("%s\n", k);
//
//	return 0;
//}
//
//
//char* itobs(int n, char* ps)
//{
//	int i;
//	const static int size = CHAR_BIT * sizeof(int);
//
//	for (i = size - 1; i >= 0; i--, n >>= 1)
//		ps[i] = (01 & n) + '0';
//	ps[size] = '\0';
//
//	return ps;
//
//}

////本电脑---结构成员的内存排列顺序
//struct data {
//	int i;
//	float f;
//	char c;
//	double d;
//	char str[20];
//};
//
//
//int main(void)
//{
//	struct data d = { 1,3.5,'a',3.1415926,"hello" };
//	printf("%d\n", sizeof(struct data));
//	printf("%d\n", sizeof(d));
//	printf("%d\n", sizeof(d.str));
//
//	printf("%p\n", &d.i);
//	printf("%p\n", &d.f);
//	printf("%p\n", &d.c);
//	printf("%p\n", &d.d);
//	printf("%p\n", &d.str);
//
//	return 0;
//
//}