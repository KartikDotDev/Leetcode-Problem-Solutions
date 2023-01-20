#include <bits/stdc++.h>
using namespace std;

class MyCalendar
{
    map<int, int> mp;

public:
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        auto itr = mp.upper_bound(start);
        if (itr == mp.end() || end <= itr->second)
        {
            mp[end] = start;
            return true;
        }
        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */