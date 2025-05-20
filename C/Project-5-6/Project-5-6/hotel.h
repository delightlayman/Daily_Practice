
//符号常量和hotel.c的所有函数原型
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 255.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "**************************************************"
//显示菜单列表
int menu(void);
//返回预定天数
int getnights(void);
//根据费率，入住天数计算费用并显示结果
void showprice(double rate, int nights);