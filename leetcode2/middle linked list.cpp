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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head == NULL || head->next ==NULL){
            return head;
        }
        if(head->next->next == NULL){
            return head->next;
        }
        while(fast->next!=NULL){
            if(fast->next->next == NULL){
                return slow->next;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
