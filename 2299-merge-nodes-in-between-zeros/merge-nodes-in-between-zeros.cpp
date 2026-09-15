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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* ans = head;
        int sum = 0;
        while (temp != NULL) {
            if (temp->val == 0) {
                if (sum != 0) {
                    ans->val = sum;
                
                    sum = 0;
                    if(temp->next!=NULL){
                        ans = ans->next;
                    }
                   
                }

            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }
        ans->next = NULL;
        return head;
    }
};