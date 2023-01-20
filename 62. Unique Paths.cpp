#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int nCr(int n, int r)
    {
        long long p = 1, k = 1;

        if (n - r < r)
            r = n - r;

        if (r != 0)
        {
            while (r)
            {
                p *= n;
                k *= r;

                // gcd of p, k
                long long m = __gcd(p, k);

                // dividing by gcd, to simplify
                // product division by their gcd
                // saves from the overflow
                p /= m;
                k /= m;

                n--;
                r--;
            }

            // k should be simplified to 1
            // as C(n, r) is a natural number
            // (denominator should be 1 ) .
        }
        else
            p = 1;

        // if our approach is correct p = ans and k =1
        return p;
    }

public:
    int uniquePaths(int m, int n)
    {
        int total_steps = m + n - 2;
        int down_steps = m - 1;
        return nCr(total_steps, down_steps);
    }
};