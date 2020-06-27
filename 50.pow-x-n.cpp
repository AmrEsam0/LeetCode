/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
   public:
    double myPow(double x, int n) {
        unsigned int p = abs(n);
        double result = 1;
        while (p > 0) {
            if (p & 1) {
                result = result * x;
            }
            p = p >> 1;
            x = x * x;
        }

        if (n < 0) {
            return 1 / result;
        }
        return result;
    }
};
// @lc code=end
