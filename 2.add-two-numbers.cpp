/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;
/* struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
}; */
class Solution {
   public:
    ListNode* createNode(int val) { return new ListNode(val); }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        if (!l1 || !l2)
            return result;

        // Point to the last digits of both numbers
        bool carry = 0;
        ListNode* retVal = createNode(0);
        result = retVal;

        // printf("retVal=%p\n", retVal);
        while (1) {
            int val1 = 0;
            int val2 = 0;

            if (l1)
                val1 = l1->val;
            if (l2)
                val2 = l2->val;

            int sum = val1 + val2 + carry;
            carry = (sum >= 10);
            int digit = sum % 10;

            result->val = digit;

            // printf("val1 = %d val2=%d result->val=%d carry=%d\n",
            //       val1, val2, result->val, carry);

            // printf("result->val=%d result->next=%p carry=%d\n",
            //       result->val, result->next, carry);

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;

            // Terminating condition.
            if (!l1 && !l2 && !carry)
                break;

            // More to add.
            result->next = createNode(0);
            result = result->next;
        }

        return retVal;
    }
};
// @lc code=end