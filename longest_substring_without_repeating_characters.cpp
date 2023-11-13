class Solution {
public:
    bool contains(string s, char a) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == a) return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        string searchBuffer = "";
        int max = 0;

        for (int i = 0; i < s.size(); i++) {
            if (!contains(searchBuffer, s[i])) {
                searchBuffer += s[i];
            } else {
                if (searchBuffer.size() > max) {
                    max = searchBuffer.size();
                }
                searchBuffer = searchBuffer.substr(searchBuffer.find(s[i]) + 1) + s[i];
            }
        }

        if (searchBuffer.size() > max) {
            max = searchBuffer.size();
        }

        return max;
    }
};
