#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {

        if (nums.size() == 0)
            return 0;
        int array[nums.size()];
        array[0] = nums[0];
        int LIS = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > array[LIS])
            {
                array[LIS + 1] = nums[i];
                LIS++;
            }
            else
            {
                for (int j = 0; j <= LIS; ++j)
                {
                    if (array[j] >= nums[i])
                    {
                        array[j] = nums[i];
                        break;
                    }
                }
            }
        }

        return LIS + 1;
    }
};