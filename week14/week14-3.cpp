//week14-3.cpp
//Leetcode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* head) {//自訂函式
        if(head==nullptr || head->next==nullptr)return head;//終止條件
        ListNode*ans=myReverse(head->next);//寒士呼叫函示
        head->next->next=head;
        head->next=nullptr;
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1=myReverse(l1);//反過來
        ListNode* list2=myReverse(l2);//反過來

        ListNode*ans=myaddTwoNumbers(list1,list2);
        return myReverse(ans);//反過來
    }
    //還缺myReverse()函式
    ListNode* myaddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode(999);//隨便的放
        ListNode* ans2=ans;//負責把ans的尾巴
        int carry =0;
        while(list1 !=nullptr || list2 !=nullptr){
            int now = carry;
            if(list1 !=nullptr){
                now +=list1->val;//加入值
                list1=list1->next;//換下一筆
            }
            if(list2 !=nullptr){
                now +=list2->val;//加入值
                list2=list2->next;//換下一筆
            }
            ans2->next=new ListNode(now%10);
            carry=now/10;//加入值
            ans2 = ans2->next;//換下一筆
        }
        if(carry>0) ans2->next=new ListNode(carry);
        return ans->next;
    }
};
