
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
//#define imgSize 5
//#define imgColSize 3
//int main() {
//
//    int img[imgSize][imgColSize] = { {2,3,4} ,{5,6,7},{8,9,10},{11,12,13},{14,15,16} };
//
//    int n = imgSize, m = imgColSize;
//
//    int arr[n][m];
//    memset(arr, 0, sizeof(arr));
//    int *row_len  = (int *)malloc(sizeof(int) * n);//ÿ�п������
//    for (int i = 0; i < n; i++) {
//        row_len[i] = m;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            int sum = 0, count = 0;
//            for (int x = i - 1; x <= i + 1; x++)
//                for (int y = j - 1; y <= j + 1; y++)
//                    if (x >= 0 && x < n && y >= 0 && y < m) {
//                        count++;
//                        sum += img[x][y];
//                    }
//            arr[i][j] = sum / count;
//            printf("%d ", arr[i][j]);
//        }
//    }
//
//
//    return 0;
//}



/**
 * Note: The returned array must be malloced, assume caller calls free().
 0 <= queries[i][0] < queries[i][1] < n
 1 < queries[i][1] - queries[i][0]
 ��ѯ��û���ظ��ĵ�·
 ���б��0---n-1
 */

//#define queriesSize 3
//#define queriesColSize 2
//
//
//inline int min_dp(int a, int b) { return a <= b ? a : b; }
//int main(void) {
//
//    int n = 5;
//    int queries[queriesSize][queriesColSize] = { {2,4},{0,2},{0,4} };
//
//    int k = queriesSize;
//    int answer[3] = {0};
//
//    int dp[5] = {0};//i��n�����·��
//    for (int i = 0; i < n; i++)// ��ʼ��dp
//    {
//        dp[i] = i;
//    }
//    int pre[5][5] = {0};//hash����¼queries�У�ͨ��i���еĳ��б�ż��� 
//    //for(int i=0;i<k;i++)//����queries
//
//
//    for (int i = 0; i < k; i++) {
//        int a = queries[i][0], b = queries[i][1];
//        pre[b][a]++;    //����pre
//        for (int j = b; j < n; j++) {   //��b��ʼ����dp
//            int min = dp[j-1];//ǰһ��dp
//            for (int z = 0; z < n; z++) {
//                if (pre[j][z])
//                    min = min_dp(min, dp[z]);
//            }
//            dp[j] = min + 1;
//        }
//        answer[i] = dp[4];
//        printf("%d ", answer[i]);
//    }
//
//    return 0;
//}


//��������
//    #define applesSize 3
//    #define daysSize 3
//int cmp(const void* a, const void* b) {
//    int *a1 = *(int(*)[2])a, * b1 = *(int(*)[2])b;
//    return a1[0] - b1[0];
//}
//
//int main(void) {
//
//    int apples[applesSize] = { 2,1,10 };
//    int days[daysSize] = { 2,10,1 };
//    int eat[applesSize][2];//���ԳԹ�������
//    for (int i = 0; i < applesSize; i++) {
//        eat[i][1] = i;//�ջ�����
//        eat[i][0] = apples[i] ? days[i] + i : 0;//��������
//    }
//    qsort(eat, applesSize, sizeof(eat[0]), cmp);//������˳������
//    int l = 0, r = 0, pos = 0;
//    int sum = 0;//�����ۼ�
//    for (int i = 0; i < applesSize; i++) {
//        if (eat[i][0]) {
//            pos = i;
//            l = eat[i][1];
//            r = eat[i][0];
//            sum = apples[l];
//            break;
//        }
//            
//    }
//    int res = 0;
//    for (int i = pos+1; i < applesSize; i++) {    //����ϲ�,�͹��������Ƚ�
//        if (r <= eat[i][1]) {
//            res += r - l > sum ? sum : r - l;
//            l = eat[i][1];
//            r = eat[i][0];
//            sum = apples[l];
//        }
//        else {
//            r = fmax(eat[i][0], r);
//            sum += apples[eat[i][1]];
//        }
//
//    }
//    res += r - l > sum ? sum : r - l;
//    printf("%d\n", res);
//    return 0;
//}

int main() {
	char* s = "leetcode";
    bool  arr[27]={0};
    for (int i = 1; i < 8; i++) {
        int x = s[i - 1] - 'a' + 1, y = s[i] - 'a' + 1;
        arr[x] = y;
        if (arr[y] == x)
            return true;
    }

    return 0;
}
