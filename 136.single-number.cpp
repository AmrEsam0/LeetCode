/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> hSet;
        for (int it : nums) {
            if (hSet.count(it)) {
                // for unordered_set the value would be either 0 as in not
                // present and 1, present.
                hSet.erase(it);
            } else {
                hSet.insert(it);
            }
        }
        auto found = hSet.begin();
        return *found;
    }
};
// @lc code=end
