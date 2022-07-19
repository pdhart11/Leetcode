int search(int* nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != target)
        {
            if (i == numsSize - 1)
            {
                return -1;
            }
        }
        else if (nums[i] == target)
        {
            return i;
        }
    }
    return 0;
}
