#include "test.h"

//#define numsSize 10
//#define QueriesSize 5
//int main() 
//{
//	int nums[numsSize] = {0, 2, 3, 4, 12, 6, 7, 13, 9, 0};
//	int queries[QueriesSize][2] = {{0, 5}, {3, 4},{1, 7}, {9, 9}, {0, 9}};
//
//
//    /*int* dp = (int*)malloc(numsSize * sizeof(int));
//
//    for (int i = 0; i < numsSize; i++) {
//        dp[i] = 1;
//    }*/
//    int dp[numsSize] = {1,1,1,1,1,1,1,1,1,1};//dp[i]��ʾ��nums[i]��β����ż�Բ�ͬ�������еĳ���
//                                             //����ֵ����ʱ������Ϊ1
//                                             //����㷨�����ڶ�̬��㣬��ͬ���ڣ�1.���ǽ�ȡһ�����ֵ��2����̬��¼�����������ۼƳ���
//    for (int i = 1; i < numsSize; i++) {
//        if ((nums[i] ^ nums[i - 1]) & 1) {  //���ڶ����ƣ���ż�����ڣ������ƴ����ĩβ���Ӷ�λ����+����1��ʹ��������0��1
//            dp[i] = dp[i - 1] + 1;          //1����ż�Բ�ͬ��0����ż����ͬ��
//        }                                   
//    }
//
//    bool* res = (bool*)malloc(QueriesSize * sizeof(bool));
//
//    for (int i = 0; i < QueriesSize; i++) {
//        int x = queries[i][0], y = queries[i][1];
//        res[i] = dp[y] >= y - x + 1;
//    }
//    for (int i = 0; i < QueriesSize; i++) {
//        printf("%d,", res[i]);
//        
//    }
//    printf("\n");
//
//    free(dp);
//
//    return 0;
//}


//void calculate_prefix_sums(int* nums, int numsSize, int* prefixSums) {
//    prefixSums[0] = 0;
//    for (int i = 1; i < numsSize; i++) {
//        prefixSums[i] = prefixSums[i - 1] + (nums[i - 1] % 2 == nums[i] % 2);
//    }
//}
//
//#define numsSize 10
//#define QueriesSize 5
//int main() {
//
//    int nums[numsSize] = { 0, 2, 3, 4, 12, 6, 7, 13, 9, 0 };
//    int queries[QueriesSize][2] = { { 0, 5 },{ 3, 4 },{ 1, 7 },{ 2,9 },{ 6, 8 } };
//    
//    int* dp = (int*)malloc(numsSize * sizeof(int));
//    dp[0] = 0;
//
//    for (int i = 1; i < numsSize; i++) {
//        dp[i] = dp[i - 1] + (nums[i - 1] % 2 == nums[i] % 2);
//    }
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d,", dp[i]);
//    }
//
//    printf("\n");
//
//    bool* answers = calloc(QueriesSize, sizeof(bool));
//
//    int prefixSums[100001];
//    calculate_prefix_sums(nums, numsSize, prefixSums);
//    for (int i = 0; i < QueriesSize; i++) {
//        int from = queries[i][0];
//        int to = queries[i][1];
//        answers[i] = (prefixSums[from] == prefixSums[to]);
//    }
//
//    for (int i = 0; i < QueriesSize; i++) {
//            printf("%d,", answers[i]);
//    }
//
//    free(answers);
//    free(dp);
//    return 0;
//}

//#define n 4
//#define MOD 1000000007
//
//int main() {
//    int dp[n + 1][2][3];
//
//    memset(dp, 0, sizeof(dp));//����Ϊ0
//    dp[0][0][0] = 1;//��ʼֵΪ1����������ȡ��1
//    for (int i = 1; i <= n; i++) {
//        // �� P ��β������
//        //
//        for (int j = 0; j <= 1; j++) {
//            for (int k = 0; k <= 2; k++) {
//                dp[i][j][0] = (dp[i][j][0] + dp[i - 1][j][k]) % MOD;
//            }
//        }
//        // �� A ��β������
//        //��A��β������A=1����ֻ�뿴��������
//        for (int k = 0; k <= 2; k++) {
//            dp[i][1][0] = (dp[i][1][0] + dp[i - 1][0][k]) % MOD;
//        }
//        // �� L ��β������
//        for (int j = 0; j <= 1; j++) {
//            for (int k = 1; k <= 2; k++) {
//                dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][k - 1]) % MOD;
//            }
//        }
//    }
//    int sum = 0;
//    for (int j = 0; j <= 1; j++) {
//        for (int k = 0; k <= 2; k++) {
//            sum = (sum + dp[n][j][k]) % MOD;
//        }
//    }
//
//1
//    return 0;
//}


////����
////�ؼ���Ҫ��֤y&x==x��yֻ��Ҫ��е���е�1��x��е���е�1��Ӧ���ɣ�����λ0��1�Կɣ���y>=x
////������⣺��y>x,�Ӷ�nums[0]=x;
//
//int main() {
//    
//    int x = 1, n = 7;
//
//    int savex = x, xbitpow = 1;
//    int nums[7];
//    nums[0] = x;
//    //��X�Ļ����ϣ���λ�ģ��ֱ��X��0����1�������϶�Ӧ2����ֵ
//    //�磺0001->0011->0101->1001 ���м��ճ�0λ�����½��ƫ��
//    //                           ������м���0������������0��С��ֵ
//    //������ϸ��ӣ��Ƽ�λ����
//    if (n > 1)
//        for (int i = 1; i < n; i++) {
//
//            int numssave = nums[i - 1];
//            int numsbitpow = 1;
//            int num1, num2;
//
//            while (numssave % 2 == 1) {  //����0λ�� 
//                numssave /= 2;
//                numsbitpow *= 2;
//            }
//            while (x % 2 == 1) {  //����0λ�� 
//                x /= 2;
//                xbitpow *= 2;
//            }
//            num1 = nums[i - 1] + numsbitpow;
//            num2 = savex + xbitpow;
//
//            nums[i] = fmin(num1, num2);
//
//            if (x != 0)
//                x /= 2;
//            if (nums[i] >= xbitpow)
//                xbitpow *= 2;
//        }
//
//    return 0;
//}


////ָ���������
//int main(){
//
//	int arr[5] = { 1,2,3,4,5 };
//
//	int *p = &arr[0];
//    int *q = &arr[4];
//
//	int **pp = &p;
//    int **qq = &q;
//
//    printf("%d\n", p-q);
//    printf("%d\n", *pp-*qq);
//
//    return 0;
//}

//
//
//int main(){
//    int n = 7, x = 1;
//    //int a=log2(x)+1,b=log2(n)+1;//��ȡ��ceil,��ȡ��floor,��������round
//
//    int a = ceil(log2(x)), b = ceil(log2(n));
//
//    printf("%d,%d\n", a,b);
//
//    int bitCount = 64 - a - b;
//    long long res = x;
//    long long m = n - 1;
//    int j = 0;
//
//    int c, d;
//
//    for (int i = 0; i < bitCount; ++i) {
//        if (((res >> i) & 1) == 0) {
//            c = res >> i;
//            if ((m >> j) & 1) 
//                res |= (1LL << i);
//            d = m >> j;
//            j++;
//        }
//    }
//
//    printf("%lld\n", res);
//
//     return 0;
//}




//#define pricesSize 6
//
//
//int main() {
//
//    int prices[pricesSize] = {7,1,5,3,6,4};
//
//     if(pricesSize==1)//��ֵ���ж�Ҫ��pricesSize>2,�ʶ�1��2���д���
//         return 0;
//     if(pricesSize==2)
//         return prices[0]<prices[1]?prices[1]-prices[0]:0;
//
//     int ex[pricesSize];//�洢prices��ֵ��λ��
//     ex[0]=0;//Ĭ�ϴ�prices[0]��ʼ�����ʱ���0λ�ã�������ֵ���prices[1]��ʼ
//     int count = 1;//��1��ʼ�жϼ�ֵ��
//
//     for (int i = 1; i < pricesSize - 1; i++) { //������pricesSize-1��������Ϊĩβ�Ƿ�Ϊ��ֵ�㲻��Ҫ
//         if (prices[i] <= prices[i - 1] && prices[i] < prices[i + 1]) {//��ҪҪ���ұߵ���������<,��<=
//            ex[count] = i;//
//             count++;
//         }
//     }
//     ex[count] = pricesSize;//��ֵ������Ϊcount-1���������һ����ֵ��,�Ҷ˵���ֹλ��
//
//     int price = prices[0], profit = 0, maxprofit = 0;//��ǰ��С�۸񣬵�ǰ������棬ȫ���������
//
//     if (count == 0) {
//         for (int i = 1; i < pricesSize; i++) {
//             price = prices[i] < price ? prices[i] : price;
//             maxprofit = prices[i] - price > maxprofit ? prices[i] - price : maxprofit;
//         }
//     }
//     else {
//         for (int i = 0; i <count; i++) {
//             price = prices[ex[i]];//���õ�ǰ��Сֵ
//             profit = 0;//���õ�ǰ�������
//             for (int j = ex[i]; j < ex[i + 1]; j++) {
//                 price = prices[j] < price ? prices[j] : price;//��ǰ��Сֵ����
//                 profit = prices[j] - price > profit ? prices[j] - price : profit;//��ǰ����������  
//             }
//             maxprofit += profit;                 
//         }
//     }
//    printf("%d\n", maxprofit);
//
//    return 0;
//}



//int main() {
//
//    char digits[] = "23";
//
//    res_row=res_col=0;
//    digits_save = digits;
//    digits_size = strlen(digits);
//
//    int num = 1;
//    for (int i = 0; i < digits_size; i++) num *= 5;
//    //res��res_tierΪ��ָ�룬��Ҫ�����ַ���ռ�
//    res = malloc(sizeof(char*) * num);
//    res_tier= malloc(sizeof(char) * digits_size + 1);
//    backtrack(0);
//
//    for (int i = 0; i < res_row; i++) {
//        int j = 0;
//        while (res[i][j] != '\0') {
//            printf("%c", res[i][j]);
//            j++;
//        }
//        printf("\n");
//    }
//    printf("%d",res_row);
//
//    free(res);
//    free(res_row);
//    
//    return 0;
//}

//
////int cmp(const void* p1, const void* p2) { return *(int*)p1 - *(int*)p2; }
//#define numsSize 3
//#define digits_size 2
//
//int main(){
//    
//    //int nums[9][2] = { {1,3},{2,4},{6,6},{6,9},{2,10},{4,10},{3,6},{1,4},{1,3}};
//    int nums[9][2] = { {1,5},{4,7},{3,6}};
//    //int nums[9][2] = { {1,3},{{5,8}};
//
//    //qsort(nums, numsSize, sizeof(int) * 2, cmp);
//
//    //int count = 0;
//
//    //for (int i = 0; i < numsSize - 1; i++) { //i��ǰ�������䣬�������������Ƚ�
//    //    if (nums[i][0] != 0)
//    //        for (int j = i + 1; j < numsSize; j++) {//j��ǰ���Ƚ�����:i����һ��
//    //            if (!(nums[j][0] < nums[i][0] && nums[j][1] < nums[i][0]) && !(nums[j][0] > nums[i][1] && nums[j][1] > nums[i][1])) {
//    //                nums[i][0] = fmin(nums[j][0], nums[i][0]);
//    //                nums[i][1] = fmax(nums[j][1], nums[i][1]);
//    //                nums[j][0] = 0;
//    //                nums[j][1] = 0;
//    //            }
//    //        }
//    //}
//    //for (int i = 0; i < numsSize; i++) {
//    //    if (nums[i][0] != 0)//1 <= starti <= endi <= 100
//    //        count += nums[i][1] - nums[i][0] + 1;
//    //}
//
//
//    //1 <= starti <= endi <= 100
//    int arr[101] = { 0 };//�±����100
//
//    int min = 100, max = 0;
//
//    for (int i = 0; i < numsSize; i++) {    //nums[i]����
//        for (int j = nums[i][0]; j <= nums[i][1]; j++)   //j����nums[i]
//            arr[j]++;
//        min = fmin(min, nums[i][0]);
//        max = fmax(max, nums[i][1]);
//    }
//
//    int count = 0;
//    for (int i = min; i <= max; i++)
//        count = arr[i] > 0 ? count + 1 : count;
//
//
//    printf("%d", count);
//    return 0;
//}


//
////������
//int cmp(const void* p1, const void* p2) { return *(int*)p1 - *(int*)p2; }
//#define busesSize  1
//#define passengersSize  2
//#define capacity  2
//
//int main(void) {
//
//    int buses[busesSize] = { 3 };
//    int passengers[passengersSize] = { 3, 2 };
//
//
//    qsort(buses, busesSize, sizeof(int), cmp);
//    qsort(passengers, passengersSize, sizeof(int), cmp);
//
//    int res = 0;
//    int j = 0;//�����˿�
//    int lbp = 0;     //ĩ�೵�ϳ��˿���
//    for (int i = 0; i < busesSize; i++) {   //��������
//        for (int u = 0; u < capacity; u++) {    //ÿ�μ����λ�˿͵���ʱ��
//            if (buses[i] >= passengers[j]) {    //����j�˿��Ƿ��ϳ�
//                j++;
//                if (i == busesSize - 1)
//                    lbp++;
//                if (j > passengersSize - 1)//��ֹԽ��
//                    goto FULL;
//            }
//        }
//    }
//FULL:
//    j--;//����ϳ��ĳ˿�
//    res = lbp==capacity? passengers[j]-1: buses[busesSize - 1];
//
//
//    while (j) {    //��ʵ�˿͵���ʱ�䣬����������ʱ��
//        if (res == passengers[j - 1])
//            res--;
//        j--;
//
//    }
//    printf("%d", res);
//
//    return res;
//}


//int main() {
//
//    char s[5] = "abcde";
//
//    int len = strlen(s);
//    int start = 0, end = 0;
//    int max = 0;
//
//    if (len == 0)
//        return 0;
//    if (len == 1)
//        return 1;
//
//    for (int i = 1; i < len+1; i++) {
//        //if (s[i] - 'a' != s[i - 1] - 'a' + 1) {
//        if (s[i]!= s[i - 1]+ 1) {
//            end = i;
//            max = fmax(max, end - start);
//            start = i;
//        }
//    }
//
//    printf("%d", max);
//
//    return max;
//}

//#define edgesSize  8
//int main() {
//
//    int edges[edgesSize] = { 1, 0,0,0,0, 7,7,5 };
//
//    long hash[10000];//long�������
//    memset(hash, 0, sizeof(hash));
//    for (int i = 0; i < edgesSize; i++) {
//        hash[edges[i]] += i;
//    }
//    long max = 0;
//    int min = 10000;
//    for (int i = 0; i < 10000; i++) {  //����max��һ�γ��ֵ�i
//        /*max = fmax(max, hash[i]);
//        min = fmin(min, i);*/
//        if (max < hash[i]) {
//            max = hash[i];
//            min = i;
//        }
//                
//    }
//
//    printf("%d", min);
//    return min;
//}

//#define costSize  10
//int main(){
//    int cost[costSize] = {1,100,1,1,1,100,1,1,100,1};
//    int dp[costSize + 1];//dp[i]����i�׵��������
//    dp[0] = 0;
//    dp[1] = 0;
//    for (int i = 2; i <= costSize; i++) {
//        dp[i] = (dp[i - 1] + cost[i - 1]) < (dp[i - 2] + cost[i - 2]) ? (dp[i - 1] + cost[i - 1]) : (dp[i - 2] + cost[i - 2]);
//    }
//    printf("%d", dp[costSize]);
//    return dp[costSize];
//}


//#define trustSize  2
//#define n  3
//int main() {
//    int trust[trustSize][2] = { {1,2},{2,3}};
//
//    int res = -1;
//    int s[n + 1];
//    memset(s, 0, sizeof(s));
//
//    for (int i = 0; i < trustSize; i++) {//�����������ߵ�֧��������
//        s[trust[i][1]]++;
//    }
//    for (int i = 1; i < n + 1; i++) {
//        if (s[i] >= n - 1) {
//            for (int j = 0; j < trustSize; j++)
//                if (trust[j][0] == i) {
//                    res = -1;
//                    break;
//                }
//                else
//                    res = i;
//        }   
//    }
//    printf("%d", res);
//    return res;
//}


//#define numsSize 3
//int cmp(const void* p1, const void* p2) { return *(int*)p1 - *(int*)p2; }
//int main() {
//
//    int nums[numsSize] = { 2,3,4};
//
//    if (numsSize == 1) return nums[0];
//
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int rear = nums[numsSize - 1];
//    int front = nums[0];
//
//    int h[rear + 1];//����ֵ����ͳ��
//    memset(h, 0, sizeof(h));
//    for (int i = 0; i < numsSize; i++)
//        h[nums[i]]++;
//
//    if (rear == front) return h[front] * front;
//
//    long dp[rear + 1];
//    dp[front - 1] = 0;
//    dp[front] = h[front] * front;
//    for (int i = front + 1; i < rear + 1; i++) {
//        dp[i] = fmax(dp[i - 2] + h[i] * i, dp[i - 1]);
//    }
//    return dp[rear];
//}



/*
2 <= ideas.length <= 5 * 104
1 <= ideas[i].length <= 10
ideas[i] ��СдӢ����ĸ���
ideas �е������ַ��� ������ͬ
*/
//���������ڷ���
//#define ideasSize  6
//typedef struct item {
//    int num;
//    char* strs[ideasSize];
//}groupitem;
//int main() {
//
//    char* ideas[ideasSize] = { "aaa","baa","caa","bbb","cbb","dbb" };
//
//    groupitem group[26];
//    //for (int i = 0; i < 26; i++) {
//    //    group[i].num = 0;
//    //    group[i].strs = (char**)malloc(sizeof(char*) * ideasSize);
//    //}
//    memset(group, 0, sizeof(group));
//    for (int i = 0; i < ideasSize; i++) {
//        char* temp = ideas[i]+1;//�ų�����ĸ��������׺
//        int k = ideas[i][0] - 'a';//����ĸ���
//        //���鲻�ܸ�ֵ����
//        group[k].strs[group[k].num]=temp;       
//        group[k].num++;
//    }
//
//    int res = 0;
//    for (int i = 0; i < 26; i++) {
//        if (!group[i].num)
//            continue;
//
//        
//        for (int j = i + 1; j < 26; j++) {
//            if (!group[j].num)
//                continue;
//            int same = 0;//ÿһ�����Ƚϵ���ͬ��׺��
//            for (int k = 0; k < group[i].num; k++) {
//                for (int l = 0; l < group[j].num; l++) {
//                    if (strcmp(group[i].strs[k], group[j].strs[l]) == 0)
//                        same++;
//                }
//            }
//
//            res += 2 * (group[i].num - same) * (group[j].num - same);
//        }
//    }
//    printf("%d", res);
//    return res;

//}

/*
1 <= s.length <= 105
s ������ĸ 'a'��'b'��'c' ���
0 <= k <= s.length
*/
//һ����һȡ
//abs�����������ﵽk��λ�ã��ҵ����е������С��λ��---��������
//˫ָ��---�����,l,r����ͷβ��r����,l����
//#define k  2
//int main() {
//
//    char* s= "aabaaaacaabc";
//
//    int len = strlen(s);
//    int count[3] = { 0 };//abc,abc-'a'��Ӧ�±�012
//
//    for (int i = 0; i < len; i++)
//        count[s[i] - 'a']++;
//    for (int i = 0; i < 3; i++) {
//        if (count[i] < k)
//            return -1;
//    }
//
//    int maxpanelen = 0;
//    for (int l = 0, r = 0; r < len; r++) {
//        count[s[r] - 'a']--;
//        while (count[s[r] - 'a'] < k) {
//            count[s[l] - 'a']++;
//            l++;
//        }
//        maxpanelen = fmax(maxpanelen, r - l + 1);
//    }
//
//    int res = len-maxpanelen;
//    printf("%d", res);
//    return res;
//}

//#define gridSize 2
//#define gridColSize 3
//
//int main(void) {
//
//    int grid[gridSize][gridColSize] = { {1,2,3},{4,5,6} };
//
//    int m = gridSize, n = gridColSize;
//    int dp[m][n];//m x n���ϵ����µ�·��ֵ�͵���Сֵ
//
//    dp[0][0] = grid[0][0];
//    printf("%d\n", dp[0][0]);
//
//    for (int i = 1; i < gridSize; i++) {
//        dp[i][0] = grid[i][0] + dp[i - 1][0];
//        printf("%d\n", dp[i][0]);
//    }
//    for (int j = 1; j < gridColSize; j++) {
//        dp[0][j] = grid[0][j] + dp[0][j - 1];
//        printf("%d\n", dp[0][j]);
//    }
//
//    for (int i = 1; i < gridSize; i++)
//        for (int j = 1; j < gridColSize; j++) {
//            dp[i][j] = fmin(dp[i - 1][j] + grid[i][j], dp[i][j - 1] + grid[i][j]);
//        }
//
//    printf("%d", dp[m - 1][n - 1]);
//
//    return dp[m - 1][n - 1];
//}




/*
1 <= days.length <= 365
1 <= days[i] <= 365
days ��˳���ϸ����
costs.length == 3
1 <= costs[i] <= 1000
*/


//����leetcode������
//#define daysSize  100
//#define costsSize 3
//
//int mincost(int m, int n, int o) {
//    int res = m;
//    res = fmin(res, n);
//    res = fmin(res, o);
//    return res;//˫��fmin()Ҳ��
//}
////������
//int main(void) {
//
//    int days[daysSize] = { 1,5,8,10,13,20,29,31,37,48,52,53,54,61,63,64,65,67,72,73,74,79,81,84,85,86,87,88,91,94,98,100,108,112,115,116,120,
//        121,123,131,132,135,137,139,141,145,147,152,163,165,166,173,174,178,179,182,187,198,202,203,204,206,208,210,212,213,216,224,230,234,
//        237,239,240,242,247,249,250,257,259,261,263,265,266,272,273,274,275,279,280,281,284,288,292,293,297,298,300,301,304,306,309,318,323,
//        326,328,330,332,335,336,339,341,342,345,350,351,362,365 };
//
//    int costs[3] = { 15,8,3 };
//
//    int dp[366];//dp[i]:��1--i����������
//    dp[0] = 0;
//    int d = 0;//���ڼ��
//    /*for (int i = 1; i <= days[daysSize - 1]; i++) {
//        if (days[d] != i)
//            dp[i] = dp[i - 1];
//        else {
//            if (i <= 7)
//                dp[i] = mincost(dp[i - 1] + costs[0], costs[1],costs[2]);
//            if (i > 7 && i <= 30)
//                dp[i] = mincost(dp[i - 1] + costs[0], dp[i - 7] + costs[1], costs[2]);
//            if (i > 30)
//                dp[i] = mincost(dp[i - 1] + costs[0], dp[i - 7] + costs[1], dp[i - 30] + costs[2]);
//            d++;
//        }
//        printf("%d\n", dp[i]);
//    }*/
//    for (int i = 1; i <= days[daysSize - 1]; i++) {
//
//         if(days[d]!=i)
//             dp[i]=dp[i-1];
//         else{
//             dp[i]=mincost(dp[i-1]+costs[0],dp[(int)fmax(i-7,0)]+costs[1],dp[(int)fmax(i-30,0)]+costs[2]);
//             d++;  
//         }
//    }
//
//    printf("%d", dp[days[daysSize - 1]]);
//    return 0;
//}

//������ת��Ϊ����������

//Ŀǰ���ͣ�1.ʮ����תΪ�����ƣ����ڶ������޷�׼ȷ��ʾĳЩʮ����������˻�������
//          2.����ת��ʱ��������
//int main(void) {
//    double h = 4.600;
//    printf("%lf\n", h);
//    long h0 = h;
//    printf("%ld\n", h0);
//
//    long h1 = h*100;
//    printf("%ld\n", h1);
//    long h2 = round(h*100);
//    printf("%ld\n", h2);
//
//    long h3 = round(h);
//    printf("%ld\n", h3);
//
//    long h4 = 4.6*100;
//    printf("%ld\n", h4);//459
//
//    printf("%ld\n", 4.6*100);//-1
//
//
//    return 0;
//}


//int mincost(int m, int n, int o) {
//    int res = m;
//    res = fmin(res, n);
//    res = fmin(res, o);
//    return res;//˫��fmin()Ҳ��
//}
//#define daysSize  6
//#define costsSize 3
//int main() {
//
//    int days[daysSize] = { 1,4,6,7,8,20 };
//    int costs[costsSize] = { 2,7,15 };
//
//    int dp[daysSize + 1];//dp[i+1]:days[0]��days[i]����С����
//    dp[0] = 0;
//    int j = 0, k = 0;//j:>days[i]-7����С����days��k:>days[i]-30����Сֵ����days
//    for (int i = 0; i < daysSize; i++) {//i����days ����j��k
//        while (days[j] <= days[i] - 7)//ע�⣺i,j,kȡ����daysSize,Խ��
//            j++;
//        while (days[k] <= days[i] - 30)
//            k++;
//        dp[i + 1] = mincost(dp[i] + costs[0], dp[j] + costs[1], dp[k] + costs[2]);
//        printf("%d\n", dp[i + 1]);
//    }
//    return dp[daysSize];
//}


//682��ʱ
// //nums1[i]�ɷֱ�nums2[j],k����
// long long numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) {

//     long long res=0;
//     for(int i=0;i<nums1Size;i++){
//         long long x=(long long)nums1[i]%(long long)k;
//         if(!x)
//             for(int j=0;j<nums2Size;j++)
//                 if(((long long)nums1[i]/(long long)k)%(long long)nums2[j]==0)
//                 res++;
//     }

//     return res;
// }
