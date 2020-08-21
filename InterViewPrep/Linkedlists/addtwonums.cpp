/*https://leetcode.com/problems/add-two-numbers/

18-08-2020 14:38:40
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807

*/

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

        ListNode *head = new ListNode();
        ListNode *temp = head;
        int ct = 1;
        int carry = 0;
        int s1,s2,s;
        while(l1 != NULL || l2!=NULL){
            if(l1 == NULL ){
                s1 = 0;
            }
            else{
                s1 = l1->val;
            }
            if(l2 == NULL){
                s2 = 0;
            }
            else{
                s2 = l2->val;
            }
            
            
            s = ((s1+s2+carry));
            temp->next = new ListNode(s%10);
            carry = s/10;
            if(l1!=NULL)
                l1 = l1->next;
            if(l2!=NULL)
                l2 = l2->next;
            
            temp =temp->next;
        }
        if(carry>0){
            temp->next = new ListNode(carry);
        }
        return head->next;
    }
};
