#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//验证：指针加1，指针地址及其指向的值的变化
//结论： 指针加1，值为随机值
//int main()
//{
//	int a = 10;
//
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//
//	printf("%p\n", p + 1);
//	printf("%d\n", *(p + 1));
//
//	printf("%p\n", p + 2);
//	printf("%d\n", *(p + 2));
//
//	printf("%p\n", p + 3); 
//	printf("%d\n", *(p + 3));
//
//	printf("%p\n", p + 4);
//	printf("%d\n", *(p + 4));
//
//	printf("%p\n", p + 5);
//	printf("%d\n", *(p + 5));
//
//	printf("%p\n", p + 6);
//	printf("%d\n", *(p + 6));
//
//	return 0;
//}


//删除重复项
//#define numsSize 20
//
////int removeDuplicates(int* nums, int numsSize);
//
//int main()
//{
//    int nums[numsSize] = { 1,1,2,2,2,3,3.0,4,4,4,5,5,5,6,7,8,9,10,12,12 };
//
//
//    int ans = 0;
//    for (int left = 0, right = 0; left < numsSize; left = right) {
//        nums[ans++] = nums[left];
//        while (right < numsSize && nums[right] == nums[left] && right++ >= 0) {}
//        if (right - left > 1) {
//            nums[ans++] = nums[left];
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}
//
////int removeDuplicates(int* nums, int numsSize) {
////    int ans = 0;
////    for (int left = 0, right = 0; left < numsSize; left = right) {
////        nums[ans++] = nums[left];
////        while (right < numsSize && nums[right] == nums[left] && right++ >= 0) {}
////        if (right - left > 1) {
////            nums[ans++] = nums[left];
////        }
////    }
////    return ans;
////}



//#define numsSize 10
//
//int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; };
//
//int main()
//{
//    int nums[numsSize] = { 1,4,3,2,5,0,9,7,8,6 };
//
//    qsort(nums, numsSize, sizeof(int), cmp);
//    for (int i = 0; i < numsSize; i++)
//        printf("%d ", nums[i]);
//
//    return 0;
//}




////数组形式的整数加法
//#include <math.h>
//
//#define numSize 3
//
//
//int main()
//{
//    int num[numSize] = { 2,1,5 };
//    int k = 806;
//
//    int i = 0;
//
//    for (i = 0; i < numSize; i++)
//        k += num[i] * (int)pow(10, numSize - 1 - i);
//   
//
//    int nsave = k, count = 0;
//
//    while (k != 0)
//    {
//        k /= 10;
//        count++;
//    }
//
//    int* sum = (int*)malloc(sizeof(int) * count);
//
//    for (i = 0; i < count; i++)
//    {      
//        sum[count - 1 - i] = nsave % 10;
//        nsave = nsave / 10;
//    }
//
//    for (i = 0; i < count; i++)
//        printf("%d\n", sum[i]);
//
//    return 0;
//}




////数组形式的整数加法
//#include <math.h>
//
//#define numSize 3
//
//
//int main()
//{
//    int num[numSize] = { 2,1,5 };
//    int k = 806;
//
//    int i, j;
//    int count = 0;
//    int ksave = k;//存储k值
//
//    while (ksave != 0)//获取k的位数
//    {
//        ksave /= 10;
//        count++;
//    }
//    int s = fmax(numSize, count) + 1;//两数相加，位数最多加1，故sum数组大小取num和k的最大位数+1
//
//    int* sum = (int*)malloc(sizeof(int) * s);
//
//    if (numSize >= count)
//    {
//        for (i = numSize - 1, j = 0; i >= 0; i--, j++) {  //i,j分别用于从后向前遍历num，sum
//            sum[s - 1 - j] = num[i] + k % 10; //末位即待处理位，取k末位数值与num[]末位数和，赋值于sum末位
//            k /= 10;  //k末位处理完毕，前进一位
//            if (sum[s - 1 - j] >= 10)  //判断sum最后一位值是否大于10
//            {
//                k++;//和值大于10会进一位，将其计入k中
//                sum[s - 1 - j] -= 10;
//            }
//            if (i == 0&&k==1) //据最后一次循环（最后一位的计算）情况,处理首位
//                           //此处k==1，退出循环后并未计入sum首位
//                sum[0] = 1;   //将此进一位存入sum首位
//            else
//                sum[0] = 0;
//        }
//    }
//    else
//    {
//        for (i = numSize - 1, j = 0; i >= 0; i--, j++) {
//            sum[s - 1 - j] = num[i] + k % 10;
//            k /= 10;
//            if (sum[s - 1 - j] >= 10)
//            {
//                k++;
//                sum[s - 1 - j] -= 10;
//            }
//        }
//        for (; k > 0; j++) {  //考虑num用完而k未完的情况
//            sum[s - 1 - j] = k % 10;    //此处减1而非减2，是因为最后一次循环会先递增j，再判断条件是否满足
//            k /= 10;
//        }
//        if (sum[0] != 1)//sum首位情况
//            sum[0] = 0;
//    }
//
//
//       
//    for (i = 0; i < s; i++)
//        printf("%d\n", sum[i]);
//
//}

//
////找出所有稳定的二进制数组 I
//
////枚举法--超出时间限制   时间空间皆要求很高
////这个题有些问题，测试用例中，limit可以超过s
//int main()
//{
//    int zero, one, limit;
//
//    while (scanf("%d %d %d", &zero, &one, &limit) != EOF)
//    {
//        int count = 0;//稳定数组计数
//        
//
//        //数组枚举与比较
//        int s = zero + one, ssave = s;//数组项数
//        //int min = s <= limit + 1 ? s : limit + 1;//获取较小值，用于筛选不合条件的数组
//
//        long long num = 1;
//        while (ssave--)
//            num *= 2;//数组存储的最大数值+1
//
//        //0和num-1值对应数组，必然不是稳定数组，此处可多减1，不减也不影响
//        num = num - 1;
//
//        int i = 0, j = 0;
//        
//
//        for (; num > 0; num--)
//        {
//            printf("num = %lld\n",num);
//            
//
//            int zeroc = 0, onec = 0;//0,1计数及循环更新
//
//            int numsave = num;//循环更新numsave值
//
//
//            int arr[s];
//
//            for (i = s - 1; i >= 0; i--)//数组赋值
//            {
//                arr[i] = numsave % 2;
//                numsave /= 2;
//            }
//            for(i= 0; i < s; i++)
//                printf("%d", arr[i]);
//            printf("\n");
//
//
//            for (i = 0; i < s; i++)
//            {
//                if (arr[i] == 0)
//                    zeroc++;
//                else
//                    onec++;
//            }
//
//            if (zeroc == zero && onec == one)//符合前两条件的数组,
//            {
//                count++;
//                //剔除相邻limit项数内，全0或全1的数组
//                if (s <= limit + 1)
//                {
//                    int k = 0, l = 0;
//                    for (i = 0; i < s; i++)//筛选不合掉第三条件的数组
//                    {
//                        printf("%d", arr[i]);
//                        if (arr[i] == 0)
//                            l++;
//                        else
//                            k++;
//                    }
//                    printf("   ");
//                    if (l == s || k == s)
//                    {
//                        count--;
//                        break;
//                    }
//
//                }
//                else
//                {
//                    for (j = 0; j <= s - limit - 1; j++)//实际比较为s - limi + 1
//                    {
//                        int k = 0, l = 0;//每次循环更新k，l
//                        for (i = 0; i < limit + 1; i++)//筛选不合掉第三条件的数组
//                        {
//                            printf("%d", arr[i+j]);
//                            if (arr[j + i] == 0)
//                                l++;
//                            else
//                                k++;
//                        }
//                        printf("   ");
//                        if (l == limit + 1 || k == limit + 1)
//                        {
//                            count--;
//                            break;
//                        }
//                        
//                    }
//                }
//                
//            }
//            printf("\n");
//        }
//
//        printf("%d\n", count);
//    }
//    
//
//    return 0;
//}




//int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size);
//
//
//int main()
//{
//    int nums1Size = 3,nums2Size = 3;
//    int nums1[3] = { 2,6,4 };
//    int nums2[3] = { 9,7,5 };
//
//    int arr[5] = { 0 };
//
//    for (int i = 0; i < nums1Size; i++)
//    {
//        arr[0] += nums1[i];
//        arr[1] += nums2[i];
//    }
//
//    arr[2] = arr[0] / nums1Size;
//    arr[3] = arr[1] / nums2Size;
//
//    arr[4] = arr[3] - arr[2];
//
//
//    printf("%d", arr[4]);
//
//    return 0;
//}

//
//
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//bool addnode(int val, struct ListNode ** pnode);
//
//
//int main()
//{
//    struct ListNode* l1 = NULL, * l2 = NULL;
//    struct ListNode* p1 = NULL, * p2 = NULL;
//
//    addnode(2, &l1);
//    addnode(4, &l1);
//    addnode(3, &l1);
//    addnode(5, &l1);
//    addnode(6, &l1);
//    addnode(4, &l1);
//
//
//    p1 = l1;
//
//    while(p1)
//    {
//        printf("%d->", p1->val);
//        p1=p1->next;
//
//        if(p1==NULL)
//            printf("NULL");
//    }
//
//    printf("\n");
//
//    addnode(5, &l2);
//    addnode(6, &l2);
//    addnode(4, &l2);
//    addnode(7, &l2);
//    addnode(3, &l2);
//
//    p2 = l2;
//    while (p2)
//    {
//        printf("%d->", p2->val);
//        p2 = p2->next;
//
//        if(p2 == NULL)
//            printf("NULL");
//    }
//
//    int sum = 0;//单项和
//    int carry = 0;//进位
//
//    struct ListNode* newlist = NULL, * newlistcur = newlist;
//
//
//    while (l1 || l2 || carry)
//    {
//
//        struct ListNode *newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
//        newnode->next = NULL;
//
//        //可优化
//        // if (!l1 && l2)//l1为空，l2不为空
//        //     sum = l2->val + carry;
//        // else if (!l2 && l1)
//        //     sum = l1->val + carry;
//        // else if (!l2 && !l1 )
//        //     sum = carry;
//        // else
//        //     sum = l1->val + l2->val + carry;
//
//        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
//
//        //可优化
//        // if (sum > 9){
//        //     newnode->val = sum % 10;
//        //     carry = 1;//进一
//        // }
//        // else{
//        //     newnode->val = sum;
//        //     carry = 0;
//        // }
//
//        newnode->val = sum % 10;
//        carry = sum / 10;
//
//        ////究极错误
//        //if (!newlist)
//        //    newlist = newnode;
//
//        //newlistcur = newnode;
//        //newlistcur = newnode->next;//这里把newlistcur->next或者newnode->next赋值给了newlistcur，导致newlistcur->next=NULL
//        //                           //在下一循环赋值newlistcur时，改变的是此时newlistcur本身值NULL，而不是newlist->next的值NULL
//        //                           //此两个NULL有所区别，故而导致后续节点无法连接到newlist上
//
//        if (!newlist)
//        {
//            newlist = newnode;
//            newlistcur = newlist;
//        }
//        else
//        {
//            newlistcur->next = newnode;
//            newlistcur = newlistcur->next;
//        }
//
//        if (l1)
//            l1 = l1->next;
//        if (l2)
//            l2 = l2->next;
//    }
//
//    printf("\n");
//    while (newlist)
//    {
//        printf("%d->", newlist->val);
//        newlist = newlist->next;
//        if(newlist == NULL)
//            printf("NULL");
//    }
//
//    return 0;
//}
//
//
//
//
//bool addnode(int val, struct ListNode ** pnode)
//{
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode)),* p = *pnode;
//    newnode->val = val;
//    newnode->next = NULL;
//
//    if(!(*pnode))
//        *pnode = newnode;
//    else
//    {
//        while (p->next != NULL)
//            p = p->next;
//        p->next = newnode;
//    }
//    
//    return true;
//}



//返回：最小X
//思路：最值比较：由于取最小x，尝试比较最值差值，且两数组最值间相互对应，故对其排序方便比较
//      
//      1.nums1较nums2多两项，可能恰去除前两项或后两项，
//      故num2首项减去num1前三项，num2尾项减去num1后三项
//      最小x必为：最小值差值与最大值差值的相同值中的最小值或3个或以上的相同差值

//      (不稳定排除) 
//      2.除前2（后2）值外，中间部分的差值必然相同。
//       故再把前2较小值（后2最大值）排除在外，用中间差值比较，与nums2[1]-nums1[3]值相同即为最小x   

//错误：相同差值>=3也也不一定是最小x

int cmp(const void* p1, const void* p2) { return *(int*)p1 - *(int*)p2; }

int minimumAddedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int difmin[3] = { 0 }, difmax[3] = { 0 }, count[3] = { 0 };
    int min;

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    for (int i = 0; i < 3; i++)
    {
        difmin[i] = nums2[0] - nums1[i];//最小值差值
        difmax[i] = nums2[nums2Size - 1] - nums1[nums1Size - i - 1];//最大值差值
    }

    qsort(difmin, 3, sizeof(int), cmp);//基于difmin做后续比较，排序：优先处理最小值

    min = difmin[2];//设置min为差值较大值，若设置为较小值，后续比差值的相同值小，则min无法更新

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (difmin[i] == difmin[j])
                count[i]++;//数组内相同差值计数,本身算一次

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (difmin[i] == difmax[j])
            {
                count[i]++;//数组间相同差值计数
                min = fmin(min, difmin[i]);//更新min
                if (count[i] >= 3)         //相同差值>=3也也不一定是最小x
                    return difmin[i];
            }


    return min;

}