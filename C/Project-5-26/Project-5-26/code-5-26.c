#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//有错误

//int main()
//{
//	printf("please enter a line (empty line to quit):\n");//gets_s吞换行符，所以空行也无法退出
//	char line[10];
//	int i;
//
//	while (gets_s(line, 10) != NULL && line[0] != '\n')
//	{
//
//		i = 0;
//		while (line[i] != '\n' && line[i] != '\0')
//			i++;
//		if (line[i] == '\n')
//			line[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//		puts(line);
//
//	}
//	return 0;
//}


//有错误

//#include <stdio.h>
//int main()
//{
//	printf("please enter a line (empty line to quit):\n");//gets_s吞换行符，所以空行也无法退出
//	char line[10];
//	int i;
//	                                               //目前理解
//	while (gets(line) != NULL && line[0] != '\n')//1.gets丢弃换行符
//	{
//		while (getchar() != '\n')//2.一次一个字符，清空输入流，但无换行符用以结束循环，getchar等待输入字符
//				continue;
//		puts(line);//打印字符数组，非输入流
//
//	}
//	return 0;
//}


//// getchar（）返回值验证
//#include <stdio.h>
//int main()
//{
//	int a;
//	char b;
//	
//	a = getchar();
//	putchar(a);
//	while (getchar()!= '\n')
//		continue;
//
//	b = getchar();
//	putchar(b);
//
//	
//	return 0;
//}



////字符串与sanf
//#include <stdio.h>
//int main()
//{
//	char name1[11], name2[11];
//
//	int count;
//	printf("Please enter 2 names.\n");
//	count = scanf("%5s %10s", name1, name2);
//	printf("I read the %d names %s and %s.\n", count, name1, name2);
//
//	return 0;
//}



////使用puts
//#include <stdio.h>
//#define DEF "I am a #define string"
//int main()
//{
//	char str1[80] = "An array was initialized to me.";
//	const char* str2 = "A pointer was initialized to me.";
//
//	puts("I'm an argument to puts.");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]);
//	puts(str2 + 4);
//
//	return 0;
//}




