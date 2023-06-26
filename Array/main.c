#include "Array.h"

int main(void)
{

    /* removeDuplicats */
    /*
    int nums[] = {1 ,1 ,1 ,2 ,3 ,3 ,4};
    int numsSize = sizeof(nums) / sizeof(int);
    numsSize = removeDuplicates(nums, numsSize);
    printf("Nums left after removal: %d\n", numsSize);
    for (int i = 0; i < 7; i++)
        printf("nums[%d] = %d\n", i, nums[i]);
    */
    
    /* isPalindrome */
    {
        char str[] = "A man, a plan, a canal: Panama";
        if (isPalindrome(str))
            printf("correctly detected Palindrome\n");
        memset(str, 0, sizeof(str));
        strcpy(str, "race a car");
        if (isPalindrome(str))
            printf("incorectly detected palindrome\n");
    }
    return (0);
}