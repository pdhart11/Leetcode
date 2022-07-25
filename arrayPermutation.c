int* buildArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    auto *new;
    new = malloc(sizeof(int)*numsSize);
    for (auto i = 0; i < numsSize; i++)
    {
        new[i] = nums[nums[i]];
    }
    return new;
}
