#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//���ֿ�
//{
//	int jane, tarazn, cheeta;
//	cheeta = jane = tarazn = 68;
//	printf("		  cheeta   tarazn    jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarazn, jane);
//
//
//	return 0;
//}


//int main()//����1-20��ƽ��
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%2d    %4d\n", num, num * num);
//		num = num + 1;
//	}
//
//	return 0;
//}




//#define SQUARES 64
//int main()//ָ������
//{
//	int num1 = 1,num2 = 1;
//	while (num1 < 65)
//	{
//		printf("%-4d %-4u\n", num1, num2);//�˷���λ���������޷���ȫ��ʾ��������ָ��ת��˵�������Ϸ��ø�������������
//		num1 = num1 + 1;
//		num2 = num2 * 2;
//
//	}
//	return 0;
//}




//#define SQUARES 64
//int main()//ָ������
//{
//	double num1 = 1.0, num2 = 1.0;
//	while (num1 < 65.0)
//	{
//		printf("%-12f %-12e\n", num1, num2);
//		num1 = num1 + 1.0;
//		num2 = num2 * 2.0;
//
//	}
//	return 0;
//}


//
//#define SQUARES 64
//int main()//ָ������������
//{
//	const double CROP = 2e16;
//	double current, total;
//	int count = 1;
//	printf("square       grains       total        ");
//	printf("fraction of \n");
//	printf("             added        grains       world total  \n");
//	total = current = 1.0;
//	
//	while (count < SQUARES)
//	{
//		count = count + 1;//�˴������⣬�����и�ֵ������û��count=1������
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %16.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	}
//	printf("That's all.\n");
//	return 0;
//}


//#define SQUARES 64
//int main()//ָ������������
//{
//	const double CROP = 2e16;
//	double current, total;
//	int count = 1;
//	printf("square       grains       total        ");
//	printf("fraction of \n");
//	printf("             added        grains       world total  \n");
//	total = current = 1.0;
//
//	while (count < SQUARES)
//	{
//		
//		printf("%4d %16.2e %12.2e %12.2e\n", count, current, total, total / CROP);//���ݿ�13���˴�12������-1��������ʼҲ��ˣ�4+13-1=16
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//
//	}
//	printf("That's all.\n");
//	return 0;
//}
//





int main()//������ʾ
{
	printf("integer division : 5/4 is %d \n", 5 / 4);
	printf("integer division : 6/3 is %d \n", 6 / 3);
	printf("integer division : 7/4 is %d \n", 7 / 4);
	printf("floating division : 7./4. is %1.2f \n", 7. / 4.);
	printf("mixed division : 7./4. is %1.2f \n", 7. / 4.);


	printf("integer division : -7/4 is %d \n", -7 / 4 );
	printf("floating division : -7.2/4. is %1.2f \n", -7.2 / 4.);
	
	printf("floating division : -7.7/3. is %1.2f \n", -7.7 / 3.);

	return 0;
}

