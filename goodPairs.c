int numIdenticalPairs(int* nums, int numsSize)
{
    int count = 0;
    for (auto i = 0; i < numsSize - 1; i++)
    {
        for (auto j = i+1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
    }
    return count;
}
