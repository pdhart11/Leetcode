int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    *returnSize = numsSize;
    auto *new;
    auto k = 0;
    new = malloc(sizeof(int)*numsSize);
    for (auto i = 0; i < n; i++)
    {
        new[k++] = nums[i];
        new[k++] = nums[i + n];
    }
    return new;
}
