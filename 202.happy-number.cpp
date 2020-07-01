/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isHappy(int n) {
        set<int> s;
        while (1) {
            int sum = 0;
            while (n != 0) {
                sum += pow(n % 10, 2);
                n = n / 10;
            }
            if (sum == 1) {
                return 1;
            }
            if (s.find(sum) == s.end()) {
                s.insert(sum);
            } else {
                return 0;
            }
            n = sum;
        }
        return 0;
    }
};
// @lc code=end
