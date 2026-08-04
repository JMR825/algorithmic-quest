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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        ListNode* prev = dummy;
        ListNode* tail=curr;
        if (head == nullptr || head->next == nullptr)
            return head;
        int length = 0;
        while (curr != nullptr ) {
            length++;
            tail=curr;
            curr = curr->next;
            
        }
        k=k%length;
        if(k==0) return head;
        int new_tail_pos = length - k;
        int new_head=length-k+1;
        ListNode* new_tail_node = head;
        for(int i=0;i<new_tail_pos-1;i++)
        {
            new_tail_node=new_tail_node->next;
        }
        ListNode* new_head_node = new_tail_node->next;

        tail->next = head;            
        new_tail_node->next = nullptr;
        return new_head_node;
    }
};
