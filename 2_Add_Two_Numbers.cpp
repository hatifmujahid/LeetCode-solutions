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
        ListNode *h1 = l1;
        ListNode *h2 = l2;
        
        int carry = 0;
        while(h1!=NULL && h2!= NULL){
            h1->val = h2->val+h1->val+carry;
            if(h1->val>9){
                carry = 1;
                h1->val = h1->val%10;
            }
            else{
                carry =0;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
        while(h1!=NULL){
            h1->val+=carry;
            if(h1->val>9){
                carry = 1;
                h1->val = h1->val%10;
            }
            else{
                carry =0;
            }
            if(h1->next == NULL){
                if(carry==1){
                    ListNode * temp = new ListNode(carry);
                    h1->next = temp;
                    carry = 0;
                }
                else {

                }
            }
            h1 = h1->next;
        }
        h1 = l1;
        while(h1->next!=NULL){
            h1 = h1->next;
        }
        while(h2!=NULL){
            h2->val = h2->val + carry;
            if(h2->val>9){
                carry = 1;
                h2->val = h2->val%10;
                ListNode * temp = new ListNode(h2->val);
                h1->next = temp;
                h1 = temp;
            }
            else{
                ListNode * temp = new ListNode(h2->val);
                h1->next = temp;
                carry =0;
                
                h1 = temp;
            }
            h2 = h2->next;
        }
        if(carry==1){
            ListNode * temp = new ListNode(carry);
            h1->next = temp;
            carry =0;
        }
            
        
        return l1;



        // num = num+num1;
        // ListNode * output=NULL;
        // ListNode * tail=NULL;
        // if(num==0){
        //     output = new ListNode(num);
        // }
        // while(num>0){
        //     long long int temp = num%10;
        //     num/=10;
        //     ListNode * node = new ListNode(temp);
        //     if(output==NULL){
        //         output = node;
        //         tail = node;
        //     }
        //     else{
        //         tail->next = node;
        //         tail = node;
        //     }
        // }

    }
};
