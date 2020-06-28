/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    void deleteNode(ListNode* node) {
        auto next = node->next;
        *node = *next;
        delete next;
    }
};
// @lc code=end
