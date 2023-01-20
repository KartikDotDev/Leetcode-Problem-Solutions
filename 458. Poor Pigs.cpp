#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest)
    {
        int result = 0;
        while (pow((minutesToTest / minutesToDie) + 1, result) < buckets)
            ++result;
        return result;
    }
};