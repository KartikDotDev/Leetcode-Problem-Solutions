#include <bits/stdc++.h>

class Solution
{
public:
    int countVowelPermutation(int n)
    {

        long long a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1e9 + 7;
        for (int k = 2; k <= n; k++)
        {
            long long Na = a, Ni = i, Ne = e, No = o, Nu = u;
            a = (Ne) % mod;
            e = (Na + Ni) % mod;
            i = (Na + Ne + No + Nu) % mod;
            o = (Ni + Nu) % mod;
            u = (Na) % mod;
        }
        return (a + e + i + o + u) % mod;
    }
};