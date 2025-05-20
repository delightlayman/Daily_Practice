#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>;
//#define SLEN 40
//#define LIM 5
////指针数组，字符串数组
//int main()
//{
//	const char* mytalents[LIM] = {
//	"Adding numbers swiftly",
//	"Multiplying accurately",
//	"Stashing data",
//	"Following instructiions to the letter",
//	"Understanding the C language"
//	};
//
//	char yourtalents[LIM][SLEN] = {
//	"Walking in a straight line",
//	"Sleeping",
//	"Watching television",
//	"Mailing letters",
//	"Reading email"
//	};
//	int i;
//
//	puts("Let's compare talents.");
//	printf("%-36s %-25s\n", "My Talents", "Your talents");
//	for(i=0;i<LIM;i++)
//		printf("%-36s %-25s\n",mytalents[i], yourtalents[i]);
//
//	printf("\nsizeof mytalents: %zd,sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));
//
//	return 0;
//}


////指针与字符串
//int main()
//{
//	const char* mesg = "Don't be a fool!";
//	const char* copy;
//
//	copy = mesg;
//	printf("%s\n", copy);
//	printf("mesg = %s,&mesg = %p,value = %p\n", mesg, &mesg, mesg);
//	printf("copy = %s,&copy = %p,value = %p\n", copy, &copy, copy);
//	return 0;
//}



////gets()和puts()
//#define STLEN 5
//int main()
//{
//	char words[STLEN];
//
//	puts("Enter a string,please.");
//	gets(words);
//	printf("Your string twice:\n");
//	printf("%s\n", words);
//	puts(words);
//	puts("Done.");
//
//	return 0;
//}


////fgets()和fputs()
//#define STLEN 14
//int main()
//{
//	char words[STLEN];
//
//	puts("Enter a string,please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(),then fputs()):\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Enter another string,please.");
//	fgets(words, STLEN, stdin);
//	puts(words);
//	fputs(words, stdout);
//	puts("Done.");
//
//	return 0;
//}



////使用fgets()的返回值
//#define STLEN 10
//int main()
//{
//	char words[STLEN];
//
//	puts("Enter strings (enpty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//		fputs(words, stdout);
//
//	puts("Done!");
//
//	return 0;
//}



//fgets()的换行符处理
#define STLEN 10
int main()
{
	char words[STLEN];
	int i;

	puts("Enter strings (enpty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i]!= '\0')//少打了一个[i]应发地址冲突
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
		puts(words);
	}

	puts("Done!");

	return 0;
}