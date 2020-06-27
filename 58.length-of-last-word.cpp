/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution {
   public:
    int lengthOfLastWord(std::string s) {
        std::vector<std::string> words;
        std::string word;
        if (s == "" || s.find_first_not_of(' ') == s.npos) {
            return 0;
        } else {
            std::stringstream ss(s);
            while (ss >> word) {
                words.push_back(word);
            }
            std::string lastWord = words[words.size() - 1];
            return lastWord.length();
        }
    }
};
// @lc code=end
