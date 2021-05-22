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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tail=list2,*head=list1,*temp=list1;
        b=b-a+1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        a--;
        while(a--)
        {
            list1=list1->next;
        }
        temp=list1->next;
        list1->next=list2;
        while(b-->0)
        {   
            temp=temp->next;
        }
        tail->next=temp;
        return head;
    }
};