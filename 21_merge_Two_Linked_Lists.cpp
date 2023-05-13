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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* head = NULL;
        while(curr1!=NULL&&curr2!=NULL){
            if(curr1->val<curr2->val){
                if(head==NULL){
                    head = new ListNode(curr1->val);
                }else{
                    ListNode * temp = head;
                    while(temp->next!=NULL){
                        temp = temp->next;
                    }
                    ListNode* newnode = new ListNode(curr1->val);
                    temp->next = newnode;
                }
                curr1 = curr1->next;
            }else {
                if(head==NULL){
                    head = new ListNode(curr2->val);
                }else{
                    ListNode * temp = head;
                    while(temp->next!=NULL){
                        temp = temp->next;
                    }
                    ListNode *newnode = new ListNode(curr2->val);
                    temp->next = newnode;
                }
                curr2 = curr2->next;
            }
        }
        while(curr1!=NULL){
            if(head==NULL){
                head = new ListNode(curr1->val);
                curr1=curr1->next;   
                continue;
            }
            ListNode * temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            ListNode *newnode = new ListNode(curr1->val);
            temp->next = newnode;
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            if(head==NULL){
                head = new ListNode(curr2->val);
                curr2=curr2->next;
                continue;
            }
            ListNode * temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            ListNode *newnode = new ListNode(curr2->val);
            temp->next = newnode;
            curr2=curr2->next;
        }
        return head;
    }
};
