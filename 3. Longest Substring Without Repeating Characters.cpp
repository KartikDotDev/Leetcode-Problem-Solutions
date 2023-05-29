class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int counter = 0, j = 0;
        map<char, int> mp;
        for (int i(0); i < s.size(); i++) {
          mp[s[i]]++;
          while(mp[s[i]] > 1) mp[s[j++]]--;
          counter = max(counter, i-j+1);
        }
        return counter;
    }
};