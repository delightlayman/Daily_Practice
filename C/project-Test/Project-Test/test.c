#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//��֤��ָ���1��ָ���ַ����ָ���ֵ�ı仯
//���ۣ� ָ���1��ֵΪ���ֵ
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


//ɾ���ظ���
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




////������ʽ�������ӷ�
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




////������ʽ�������ӷ�
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
//    int ksave = k;//�洢kֵ
//
//    while (ksave != 0)//��ȡk��λ��
//    {
//        ksave /= 10;
//        count++;
//    }
//    int s = fmax(numSize, count) + 1;//������ӣ�λ������1����sum�����Сȡnum��k�����λ��+1
//
//    int* sum = (int*)malloc(sizeof(int) * s);
//
//    if (numSize >= count)
//    {
//        for (i = numSize - 1, j = 0; i >= 0; i--, j++) {  //i,j�ֱ����ڴӺ���ǰ����num��sum
//            sum[s - 1 - j] = num[i] + k % 10; //ĩλ��������λ��ȡkĩλ��ֵ��num[]ĩλ���ͣ���ֵ��sumĩλ
//            k /= 10;  //kĩλ������ϣ�ǰ��һλ
//            if (sum[s - 1 - j] >= 10)  //�ж�sum���һλֵ�Ƿ����10
//            {
//                k++;//��ֵ����10���һλ���������k��
//                sum[s - 1 - j] -= 10;
//            }
//            if (i == 0&&k==1) //�����һ��ѭ�������һλ�ļ��㣩���,������λ
//                           //�˴�k==1���˳�ѭ����δ����sum��λ
//                sum[0] = 1;   //���˽�һλ����sum��λ
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
//        for (; k > 0; j++) {  //����num�����kδ������
//            sum[s - 1 - j] = k % 10;    //�˴���1���Ǽ�2������Ϊ���һ��ѭ�����ȵ���j�����ж������Ƿ�����
//            k /= 10;
//        }
//        if (sum[0] != 1)//sum��λ���
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
////�ҳ������ȶ��Ķ��������� I
//
////ö�ٷ�--����ʱ������   ʱ��ռ��Ҫ��ܸ�
////�������Щ���⣬���������У�limit���Գ���s
//int main()
//{
//    int zero, one, limit;
//
//    while (scanf("%d %d %d", &zero, &one, &limit) != EOF)
//    {
//        int count = 0;//�ȶ��������
//        
//
//        //����ö����Ƚ�
//        int s = zero + one, ssave = s;//��������
//        //int min = s <= limit + 1 ? s : limit + 1;//��ȡ��Сֵ������ɸѡ��������������
//
//        long long num = 1;
//        while (ssave--)
//            num *= 2;//����洢�������ֵ+1
//
//        //0��num-1ֵ��Ӧ���飬��Ȼ�����ȶ����飬�˴��ɶ��1������Ҳ��Ӱ��
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
//            int zeroc = 0, onec = 0;//0,1������ѭ������
//
//            int numsave = num;//ѭ������numsaveֵ
//
//
//            int arr[s];
//
//            for (i = s - 1; i >= 0; i--)//���鸳ֵ
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
//            if (zeroc == zero && onec == one)//����ǰ������������,
//            {
//                count++;
//                //�޳�����limit�����ڣ�ȫ0��ȫ1������
//                if (s <= limit + 1)
//                {
//                    int k = 0, l = 0;
//                    for (i = 0; i < s; i++)//ɸѡ���ϵ���������������
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
//                    for (j = 0; j <= s - limit - 1; j++)//ʵ�ʱȽ�Ϊs - limi + 1
//                    {
//                        int k = 0, l = 0;//ÿ��ѭ������k��l
//                        for (i = 0; i < limit + 1; i++)//ɸѡ���ϵ���������������
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
//    int sum = 0;//�����
//    int carry = 0;//��λ
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
//        //���Ż�
//        // if (!l1 && l2)//l1Ϊ�գ�l2��Ϊ��
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
//        //���Ż�
//        // if (sum > 9){
//        //     newnode->val = sum % 10;
//        //     carry = 1;//��һ
//        // }
//        // else{
//        //     newnode->val = sum;
//        //     carry = 0;
//        // }
//
//        newnode->val = sum % 10;
//        carry = sum / 10;
//
//        ////��������
//        //if (!newlist)
//        //    newlist = newnode;
//
//        //newlistcur = newnode;
//        //newlistcur = newnode->next;//�����newlistcur->next����newnode->next��ֵ����newlistcur������newlistcur->next=NULL
//        //                           //����һѭ����ֵnewlistcurʱ���ı���Ǵ�ʱnewlistcur����ֵNULL��������newlist->next��ֵNULL
//        //                           //������NULL�������𣬹ʶ����º����ڵ��޷����ӵ�newlist��
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



//���أ���СX
//˼·����ֵ�Ƚϣ�����ȡ��Сx�����ԱȽ���ֵ��ֵ������������ֵ���໥��Ӧ���ʶ������򷽱�Ƚ�
//      
//      1.nums1��nums2���������ǡȥ��ǰ���������
//      ��num2�����ȥnum1ǰ���num2β���ȥnum1������
//      ��Сx��Ϊ����Сֵ��ֵ�����ֵ��ֵ����ֵͬ�е���Сֵ��3�������ϵ���ͬ��ֵ

//      (���ȶ��ų�) 
//      2.��ǰ2����2��ֵ�⣬�м䲿�ֵĲ�ֵ��Ȼ��ͬ��
//       ���ٰ�ǰ2��Сֵ����2���ֵ���ų����⣬���м��ֵ�Ƚϣ���nums2[1]-nums1[3]ֵ��ͬ��Ϊ��Сx   

//������ͬ��ֵ>=3ҲҲ��һ������Сx

int cmp(const void* p1, const void* p2) { return *(int*)p1 - *(int*)p2; }

int minimumAddedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int difmin[3] = { 0 }, difmax[3] = { 0 }, count[3] = { 0 };
    int min;

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    for (int i = 0; i < 3; i++)
    {
        difmin[i] = nums2[0] - nums1[i];//��Сֵ��ֵ
        difmax[i] = nums2[nums2Size - 1] - nums1[nums1Size - i - 1];//���ֵ��ֵ
    }

    qsort(difmin, 3, sizeof(int), cmp);//����difmin�������Ƚϣ��������ȴ�����Сֵ

    min = difmin[2];//����minΪ��ֵ�ϴ�ֵ��������Ϊ��Сֵ�������Ȳ�ֵ����ֵͬС����min�޷�����

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (difmin[i] == difmin[j])
                count[i]++;//��������ͬ��ֵ����,������һ��

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (difmin[i] == difmax[j])
            {
                count[i]++;//�������ͬ��ֵ����
                min = fmin(min, difmin[i]);//����min
                if (count[i] >= 3)         //��ͬ��ֵ>=3ҲҲ��һ������Сx
                    return difmin[i];
            }


    return min;

}