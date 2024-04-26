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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* ans=new ListNode();
        ListNode* head=ans;
        int carry=0;
        // int sum=0;
        while(l1!=NULL||l2!=NULL||carry!=0){
            int sum=carry;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            // sum=sum+carry;
            carry=sum/10;
            sum=sum%10;
            ans->next=new ListNode(sum);
            ans=ans->next;
        }
        return head->next;
        
    }
};