//week14-1
//Leetcode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;//伸縮自如的陣列
        while(head !=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode*ans=new ListNode(999);//隨便的放
        ListNode* ans2=ans;//負責把ans的尾巴
        //倒過來迴圈
        for(int i=a.size()-1;i>=0;i--){
            ans2->next=new ListNode(a[i]);//下一筆
            ans2=ans2->next;
        }
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
