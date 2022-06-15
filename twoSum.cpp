class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> out(2, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    break;
                }
                if (nums[i] + nums[j] == target)
                {
                    printf("[%d,%d]\n", j, i);
                    out[0] = j;
                    out[1] = i;
                    break;
                }
            }
        }
        return out;
    }
};
