#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//�ַ����ı�ʾ��ʽ
#include <stdio.h>
//#define MSG "I am a symbolic string constant"
//#define MAXLENGTH 81
//int main()
//{
//	char words[MAXLENGTH] = "I am a string in a array";
//
//	const char* pt1 = "Something is pointing at me";
//	puts("Here are some strings:");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//
//	return 0;
//
//}



//#define MSG "I'm special"
//
//int main()
//{
//	char ar[] = MSG;
//
//	const char* pt = MSG;
//	printf("address of \"I'm special\": %p \n", "I'm special");
//
//	printf("            address ar: %p\n", ar);
//	printf("            address ar: %p\n", pt);
//	printf("            address of MSG: %p\n", MSG);
//
//	printf("address of \"I'm special\": %p \n", "I'm special");
//
//	return 0;
//
//}




//�ַ����飨ָ�룩��ָ���ַ���ָ��
int main()
{
	char* p1= "klingon";
	p1 = 'F';
		

	printf("klingon");
	printf(": Beware the %ss!" ,"klingon");

	
	*(p1 + 1) = 'F';//���Է��ֽ���쳣
	printf("klingon");

	char* word = "frame";
	word[1] = '1';//���Է��ֽ���쳣

	return 0;

}