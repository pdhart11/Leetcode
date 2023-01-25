int differenceOfSum(int* nums, int numsSize)
{
    int digitSum = 0;
    int elementSum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        elementSum = elementSum + nums[i];
        while (nums[i] > 0)
        {
            digitSum = digitSum + (nums[i] % 10);
            nums[i] = nums[i] / 10;
        }
    }
    int difference = abs(digitSum - elementSum);
    return difference;
}
