#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

////Ԥ������Ԥ�����ʶ��

//
//void why();
//
//
//int main()
//{
//   printf("The file is %s\n", __FILE__);
//   printf("The date is %s\n", __DATE__);
//   printf("The time is %s\n", __TIME__);
//
//   printf("The version is %ld.\n", __STDC_VERSION__);
//   printf("The line is %d\n", __LINE__);
//   printf("The function is %s\n", __func__);
//   why();
//
//    return 0;
//}
//
//void why()
//{
//   printf("The function is %s\n", __func__);
//   printf("The line is %d\n", __LINE__);
//
//}

////ֱ������ת��Ϊ������

//#define RAD_TO_DEG (180/(4*atan(1)))
//
//typedef struct polar_v {
//    double magnitude;//б�߳�
//    double angle;//�Ƕ�
//}Polar_V;
//
//
//typedef struct rect_v {
//    double x;
//    double y;
//}Rect_V;
//
//
//Polar_V rect_to_polar(Rect_V);
//
//int main()
//{
//    Rect_V input;
//    Polar_V result;
//
//    puts("Enter x and y coordinates. Enter q to quit.");
//    while (scanf("%lf %lf", &input.x, &input.y) == 2)
//    {
//        result = rect_to_polar(input);
//        printf("magnitude = %.2f,angle = %.2f\n", result.magnitude,result.angle);
//
//    }
//
//    puts("Done.");
//
//    return 0;
//}
//
//
//Polar_V rect_to_polar(Rect_V rv)
//{
//    Polar_V pv;
//    pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
//    if(pv.magnitude == 0.0)
//        pv.angle = 0.0;
//    else
//        pv.angle = RAD_TO_DEG*(atan2(rv.y, rv.x));
//
//    return pv;
//}



//���巺�ͺ�
#define RAD_TO_DEG (180/(4*atanl(1)))//ע��atanl��l��Сд����ĸL

//����ƽ��������
#define SQRT(X) _Generic((X),\
	long double:sqrtl,\
	float:sqrtf,\
	default:sqrt)(X)

//�������Һ������Ƕȵ�λΪ��
#define SIN(X) _Generic((X),\
	long double:sinl((X)/RAD_TO_DEG),\
	float:sinf((X)/RAD_TO_DEG),\
	default:sin((X)/RAD_TO_DEG)\
)

int main()
{
	float x = 45.0f;
	double xx = 45.0;
	long double xxx = 45.0L;

	long double y = SQRT(x);
	long double yy = SQRT(xx);
	long double yyy = SQRT(xxx);

	printf("%.17Lf\n", y);//ƥ��float
	printf("%.17Lf\n", yy);//ƥ��default
	printf("%.17Lf\n", yyy);//ƥ��long double

	int i = 45;
	yy=SQRT(i);				//ƥ��default
	printf("%.17Lf\n", yy);
	yyy = SIN(xxx);			//ƥ��long double
	printf("%.17Lf\n", yyy);

	return 0;
}