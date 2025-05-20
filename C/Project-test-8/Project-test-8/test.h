#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //char phoneMap[11][5] = {"\0", "\0", "abc\0", "def\0", "ghi\0", "jkl\0", "mno\0", "pqrs\0", "tuv\0", "wxyz\0"};

 // char a[8][4]={
     //        {'a','b','c','0'},
     //        {'d','e','f','0'},
     //        {'g','h','i','0'},
     //        {'j','k','l','0'},
     //        {'m','n','o','0'},
     //        {'p','q','r','s'},
     //        {'t','u','v','0'},
     //        {'w','x','y','z'}
     //    };

//char phoneMap[11][5] = { "\0", "\0", "abc\0", "def\0", "ghi\0", "jkl\0", "mno\0", "pqrs\0", "tuv\0", "wxyz\0" };
char* board[10] = { "","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };//键盘建立

char* digits_save;//与digits区别，避免参数传递出问题
int digits_size;//digits字符串长度

char** res;//返值数组
int res_row;//返值数组行标

char* res_tier;//res处理行
int res_col;//返值数组列标

//都是被调函数，创建变量以备调用
void backtrack(int num) {//digits_num--当前处理层，从0开始，递推到digits_size
    if (num == digits_size) {    //当digits_num==digits_size，实际处理层数已为digits_size
        char* temp = (char*)malloc(sizeof(char) * (digits_size + 1));//用于拷贝res_tier数据
        memcpy(temp, res_tier, sizeof(char) * (digits_size + 1));
        res[res_row] = temp;
        res_row++;//res下一行
    }
    else {
        //避免变量冲突创建局部变量
        char digit = digits_save[num];
        char* board_row = board[digit - '0'];//键盘行--当前处理行
        int board_col = strlen(board_row);//键盘列--列数

        for (int i = 0; i < board_col; i++) {
            res_tier[res_col] = board_row[i];
            res_col++;
            res_tier[res_col] = 0;//res_tier分配内存后，都是垃圾值
            //字符数组不加'\0',不成数组
            //ASCII：0对应'\0'
            backtrack(num + 1);
            //回溯---撤销当前res_tier的res_column位处理，下一循环重新赋值
            res_col--;
            res_tier[res_col] = 0;

        }
    }
}




