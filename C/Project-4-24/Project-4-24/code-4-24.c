#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	char ch;
//	printf("Give the letter of the alphabet,and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter;type a # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))
//			switch (ch)
//			{
//			case 'a':
//				printf("argali,a wild sheep of Asia\n");
//				break;//没有break，switch会从标签执行至结尾
//			case 'b':
//				printf("babirusa,a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati,racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman,aquatic,molelike crittter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher,brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//			}
//		else
//			printf("I recogise only lowercase letter.\n");
//		while (getchar() != '\n')
//			continue;//跳过输入行的剩下部分
//		printf("Please type  another letter or a #.\n");
//	
//	}
//
//	printf("Bye!\n");
//	return 0;
//}





//int main()//多重标签
//{
//	int k;
//	int a=0, b=0, c=0;
//	printf("Enter some text;enter # to quit.\n");
//	while (scanf("%d",&k) ==1)
//	{
//		switch (k)
//		{
//		case 1:
//		case 2:
//		case 3:
//			a++;
//			break;
//		case 4:
//		case 5:
//			b++;
//			break;
//		case 6:
//		case 7:
//		case 8:
//		case 9:
//			c++;
//			break;
//		default:break;
//		}		
//	}printf("The number of vowils:   a   b   c\n");
//	printf("                        %d   %d   %d\n",a,b,c);
//
//
//	return 0;
//}





int main()//多重标签
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}



