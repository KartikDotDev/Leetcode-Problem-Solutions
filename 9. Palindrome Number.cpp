#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int divisor = 1;
        while (x / divisor >= 10)
            divisor *= 10;

        while (x != 0)
        {
            if (x / divisor != x % 10)
                return false;
            x %= divisor;
            x /= 10;
            divisor /= 100;
        }
        return true;
    }
};