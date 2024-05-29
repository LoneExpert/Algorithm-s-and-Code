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

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* ford = NULL;
        ListNode* curr = head;

        while(curr!=NULL){
            ford = curr->next;
            curr->next = prev;
            prev=curr;
            curr=ford;
        }
        return prev;
    }

    void  InsertAtTail(ListNode* &head, ListNode* &tail,int data){
        ListNode* temp = new ListNode(data);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
    }

    ListNode* add(ListNode* l1, ListNode* l2){
        int cry = 0;

        ListNode* anshead = NULL;
        ListNode* anstail = NULL;

        while(l1!=NULL && l2!=NULL){
            int sum = cry + l1->val+l2->val;
            int digit = sum%10;
            //create node and add in ans List
            InsertAtTail(anshead,anstail,digit);
            cry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            int sum = cry + l1->val;
            int digit = sum%10;
            //create node and add in ans List
            InsertAtTail(anshead,anstail,digit);
            cry = sum/10;
            l1 = l1->next;
        }
        while(l2!=NULL){
            int sum = cry + l2->val;
            int digit = sum%10;
            //create node and add in ans List
            InsertAtTail(anshead,anstail,digit);
            cry = sum/10;
            l2 = l2->next;
        }
        while(cry!=0){
            int sum=cry;
            int digit = sum%10;
            //create node and add in ans List
            InsertAtTail(anshead,anstail,digit);
            cry = sum/10;
        }
        return anshead;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //step 1 reverse
        l1 = reverse(l1);
        l2 = reverse(l2);

        //step 2 add two List
        ListNode* ans = add(l1,l2);

        // step3 reverse the answer
        ans = reverse(ans);

        return ans;
    }
};