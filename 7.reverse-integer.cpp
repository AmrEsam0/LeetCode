/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
   public:
    int reverse(int x) {
        int reversed = 0;
        while (x != 0) {
            if (abs(reversed) > 214748364) {
                return 0;
            }
            reversed *= 10;
            reversed += x % 10;
            x /= 10;
        }
        return reversed;
    }
};
// @lc code=end
