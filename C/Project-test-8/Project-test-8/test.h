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
char* board[10] = { "","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };//���̽���

char* digits_save;//��digits���𣬱���������ݳ�����
int digits_size;//digits�ַ�������

char** res;//��ֵ����
int res_row;//��ֵ�����б�

char* res_tier;//res������
int res_col;//��ֵ�����б�

//���Ǳ������������������Ա�����
void backtrack(int num) {//digits_num--��ǰ����㣬��0��ʼ�����Ƶ�digits_size
    if (num == digits_size) {    //��digits_num==digits_size��ʵ�ʴ��������Ϊdigits_size
        char* temp = (char*)malloc(sizeof(char) * (digits_size + 1));//���ڿ���res_tier����
        memcpy(temp, res_tier, sizeof(char) * (digits_size + 1));
        res[res_row] = temp;
        res_row++;//res��һ��
    }
    else {
        //���������ͻ�����ֲ�����
        char digit = digits_save[num];
        char* board_row = board[digit - '0'];//������--��ǰ������
        int board_col = strlen(board_row);//������--����

        for (int i = 0; i < board_col; i++) {
            res_tier[res_col] = board_row[i];
            res_col++;
            res_tier[res_col] = 0;//res_tier�����ڴ�󣬶�������ֵ
            //�ַ����鲻��'\0',��������
            //ASCII��0��Ӧ'\0'
            backtrack(num + 1);
            //����---������ǰres_tier��res_columnλ������һѭ�����¸�ֵ
            res_col--;
            res_tier[res_col] = 0;

        }
    }
}




