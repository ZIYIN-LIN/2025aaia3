//week3_3.cpp學習計畫Linked list第3題
//LeetCode 2. Add Two Numbers 直式加法

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(999);
        ListNode*ans2=ans;
        int carry =0;//加法的進位
        while(l1 !=nullptr||l2!=nullptr){
            int now = carry;//有沒有進位
            if(l1 !=nullptr){
                now +=l1->val;//把值加進去
                l1 = l1->next;//換下一筆
            }
            if(l2 !=nullptr){
                now +=l2->val;//把值加進去
                l2 = l2->next;
            }
            ans2->next=new ListNode(now%10);準備一個node
            ans2=ans2->next;//換下一筆
            carry=now/10;
        }
        if(carry>0)ans2->next=new ListNode(carry);//還有進位加一位
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
