#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

//把文件压缩为原来的1/3
#include<stdio.h>
#include<stdlib.h>//exit()原型
#include<string.h>//strcpy(),strcar()原型
#define LEN 40

int main(int argc, char* argv[])
{
	FILE *in,*out;//文件指针
	int ch;
	char name[LEN];//文件名
	int count = 0;

	//检查命令行数
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//设置输入
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//设置输出
	strncpy(name, argv[1], LEN - 5);//拷贝原件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");//文件名添加.red

	if ((out = fopen(name, "w")) == NULL)//写模式打开文件
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	//拷贝数据
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);//打印3个字符中的第1个

	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files.\n");

return 0;
}
