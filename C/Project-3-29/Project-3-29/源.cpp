#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main() 
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//	printf("num as short and unsigned short: %hd %hu\n", num, num);
//	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int,short,char;%d %hd %c\n", WORDS, WORDS, WORDS);
//
//	return 0;
//}





//int main()
//{
//	float a = 3.0;
//	double b = 3.0;
//	long c = 2000000000;
//	long d = 1234567890;
//	long e = 12345;
//
//	printf("%.1e %.1e %.1e %.1e\n", a, b, c, d);
//	printf("%ld %ld\n", c, d);
//	printf("%ld %ld %ld %ld\n", a, b, c, d);//此处计算机可以正确识别c·d，与书上同
//	printf("%d", sizeof(double));
//
//	printf("%.1e %.1e %.1e %.1e\n", a, b, c, d, e);
//
//	return 0;
//}




//int main()//返回值
//{
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}



//int main()//字符串断行,注意空格
//{
//
//    printf("Here's one way to print a ");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//long string.\n");
//	printf("Here's the newest way to print a "
//		"long string.\n");//ANSIC
//	return 0;
//}




//int main()//何时使用&
//{
//	int age;
//	float assets;
//	char pet[30];
//	printf("Enter your age,assets,and you favorite pet.\n");
//	scanf("%d %f", &age, &assets);
//	scanf("%s", pet);//此处为数组，不用加&,此处为%s，字符数组---字符串
//		printf("%d $%.2f %s", age, assets, pet);
//	return 0;
//}

//int main()//*控制字符宽度
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("the number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weigth = %*.*f\n", width, precision, weight); 
//	printf("Done!\n");
//	return 0;
//}

//int main()
//{
//	int n;
//	printf("Please enter three integers:\n");
//	scanf("%*d %*d %d", &n);
//	printf("The last intger was %d\n", n);
//	return 0;
//}



int main()//-13.45e12# 0            //这几行代码为搞清楚 
{
	char n[36];
	printf("Please enter a words:\n");
	scanf("%d",n);
	printf("%u\n\n",n);
	scanf("%f",n);
	printf("%f\n\n",n);
	scanf("%s",n);
	printf("%s\n\n",n);
	scanf("%c",n);
	printf("%c\n\n",n);
	return 0;
}
