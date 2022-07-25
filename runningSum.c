int* runningSum(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    auto *myArray;
    myArray = malloc(sizeof(int)*numsSize);
    auto count = 0;
    for (auto i = 0; i < numsSize; i++)
    {
        count = count + nums[i];
        myArray[i] = count;
    }
    return myArray;
}
