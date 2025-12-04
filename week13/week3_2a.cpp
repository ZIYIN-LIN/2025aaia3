//week3_2a.cpp學習計畫Linked list第一題
//21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ans =new ListNode(999);
        ListNode* ans2 =new ListNode(888);
        ans->next=ans2;
        return ans;
    }
};
