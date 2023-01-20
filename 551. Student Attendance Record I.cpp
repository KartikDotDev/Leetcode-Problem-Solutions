#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkRecord(string s)
    {

        int Acount = 0, Lcount = 0;
        for (int i(0); i < s.size(); i++)
        {
            if (s[i] == 'A')
                Acount++;

            if (s[i] == 'L')
                Lcount++;

            else if (Lcount < 3)
                Lcount = 0;

            if (Acount > 1 || Lcount > 2)
                return false;
        }
        return true;
    }
};