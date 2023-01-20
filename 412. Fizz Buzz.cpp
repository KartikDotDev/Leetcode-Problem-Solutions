#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ls;
        string curr = "";
        for (int i(1); i <= n; i++)
        {
            curr = "";
            if (!(i % 3))
                curr += "Fizz";

            if (!(i % 5))
                curr += "Buzz";

            if ((i % 5) && (i % 3))
                curr += to_string(i);

            ls.insert(ls.end(), curr);
        }
        return ls;
    }
};