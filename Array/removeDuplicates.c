#include "Array.h"

int removeDuplicates(int* nums, int numsSize)
{
    int i = 0;

    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] == nums[j])
            memmove(&nums[i], &nums[j], (numsSize - i) * sizeof(int));
        else
            i++;
    }
    return (i);
}
