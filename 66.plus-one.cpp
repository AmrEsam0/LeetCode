/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> temp;
        int i = digits[digits.size() - 1] + 1;
        if (i > 9) {
            while (i > 0) {
                temp.push_back(i % 10);
                i /= 10;
            }
            reverse(temp.begin(), temp.end());
            digits.pop_back();
            for (auto it : temp) {
                digits.push_back(it);
            }
        } else {
            digits.pop_back();
            digits.push_back(i);
        }

        return digits;
    }
};
// @lc code=end
