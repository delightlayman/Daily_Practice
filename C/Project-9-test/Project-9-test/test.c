#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>



// typedef struct ListNode {
//     int val;
//     struct ListNode *next;
// }node;
//
//int main() {
//
//    node* head = (node*)malloc(sizeof(node));
//    head->val = 4;
//    node* node1 = (node*)malloc(sizeof(node));
//    node1->val = 2;
//    node* node2 = (node*)malloc(sizeof(node));
//    node2->val = 1;
//    node* node3 = (node*)malloc(sizeof(node));
//    node3->val = 3;
//    head->next = node1;
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = NULL;
//
//    if (!head || !(head->next)) return head;
//
//    node* sortlist = (node*)malloc(sizeof(node));
//    sortlist->next = head;
//    node* pre = head, * cur = pre->next;
//    while (cur) {
//        if (cur->val >= pre->val) {
//            pre = pre->next;
//        }
//        else {
//            node* temp = sortlist;//插入位置的前一个节点
//            while (temp->next->val <= cur->val) {
//                temp = temp->next;
//            }
//            pre->next = cur->next;
//            cur->next = temp->next;
//            temp->next = cur;
//        }
//        cur = pre->next;
//    }
//
//    while (sortlist) {
//        printf("%d ", sortlist->val);
//        sortlist = sortlist->next;
//    }
//    return 0;
//}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //i任取，x递增，期望每次取的都比x大---排序

#define rewardValuesSize 4


int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main() {

    int rewardValues[rewardValuesSize] = { 2,15,14,18 };

    qsort(rewardValues, rewardValuesSize, sizeof(int), cmp);
    int maxx = 0;
    for (int i = 0; i < rewardValuesSize; i++) {
        int x = 0;
        for (int j = i; j < rewardValuesSize; j++) {
            if (x < rewardValues[j])
                x += rewardValues[j];
        }
        maxx = fmax(maxx, x);
    }
    printf("%d\n", maxx);
    return maxx;
}