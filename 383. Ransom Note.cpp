#include <bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ran[26] = {0};
        for(int x(0); x < magazine.size();x++)
            ran[magazine[x] - 'a']++;
        
        for(int x(0); x < ransomNote.size(); x++)
        {
            ran[ransomNote[x]-'a']--; 
            if (ran[ransomNote[x]-'a'] < 0)
                return false;
        }
        return true;
    }
};