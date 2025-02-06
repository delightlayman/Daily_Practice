#include <stdio.h>

#define LEN 20

int removeDuplicates(int* nums, int numsSize);

int main()
{
    int arr[LEN]={1,1,2,2,2,3,3.0,4,4,4,5,5,5,6,7,8,9,10,12,12};
    printf("%d",removeDuplicates(arr,LEN));
    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    int ans = 0;
    for (int left = 0, right = 0; left < numsSize; left = right) {
        nums[ans++] = nums[left];
        while (right < numsSize && nums[right] == nums[left] && right++ >= 0) {}
        if (right - left > 1) {
            nums[ans++] = nums[left];
        }
    }
    return ans;
}