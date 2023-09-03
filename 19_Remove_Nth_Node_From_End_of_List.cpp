class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * curr = head; 
        int size = 1;
        while(curr!=NULL){
            curr = curr->next;
            size = size+1;
        }
        int place = size - n;
        cout<<place;
        place = place -1;

        if(head == NULL || head->next == NULL){
            return NULL;
        }
        if(place == 0){
            head = head->next;
            return head;
        }
        curr = head;
        ListNode * prev = NULL;
        for(int i=0;i<place;i++){
            prev = curr;
            curr = curr->next;
        }
        cout<<curr->val<<endl<<prev->val;
        prev->next = curr->next;
        
        return head;
    }
};
