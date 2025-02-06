
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size);

// int main()
// {
//     int nums1[3]={2,6,4};
//     int nums2[3]={9,7,5};

//     printf("%d", addedInteger(nums1, 3, nums2, 3));

//     return 0;
// }


// int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {

//     int arr[5]={0};

//     for(int i = 0;i<nums1Size;i++)
//     {
//         arr[0]+=nums1[i];
//         arr[1]+=nums2[i]; 
//     }
    
//     arr[2]=arr[0]/nums1Size;      
//     arr[3]=arr[1]/nums2Size;

//     arr[4]=(arr[3]-arr[2])/nums1Size;

//     return arr[4];
// }


int main(){
    int dp[2][2][3]={0};

    dp[0][0][0]=1;
    //P结尾
    dp[1][0][0]=dp[1][0][0]+dp[0][0][0];
    dp[1][0][1]=dp[1][0][1]+dp[0][0][1];
    dp[1][0][2]=dp[1][0][2]+dp[0][0][2];

    dp[1][1][0]=dp[1][1][0]+dp[0][1][0];
    dp[1][1][1]=dp[1][1][1]+dp[0][1][1];
    dp[1][1][2]=dp[1][1][2]+dp[0][1][2];

    //A结尾
    dp[1][1][0]=dp[1][1][0]+dp[0][0][0];
    dp[1][1][1]=dp[1][1][1]+dp[0][0][1];
    dp[1][1][2]=dp[1][1][2]+dp[0][0][2];    

    //L结尾
    dp[1][0][1]=dp[1][0][1]+dp[0][0][0];
    dp[1][0][2]=dp[1][0][2]+dp[0][0][1];

    dp[1][1][1]=dp[1][1][1]+dp[0][1][0];
    dp[1][1][2]=dp[1][1][2]+dp[0][1][1];

}