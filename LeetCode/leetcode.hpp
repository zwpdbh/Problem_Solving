//
// Created by zwpdbh on 2018/8/11.
//

#ifndef PROBLEM_SOLVING_LEETCODE_HPP
#define PROBLEM_SOLVING_LEETCODE_HPP

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LeetCode {
public:
    static ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
};


#endif //PROBLEM_SOLVING_LEETCODE_HPP
