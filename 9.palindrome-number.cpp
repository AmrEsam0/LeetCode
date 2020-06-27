/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end
