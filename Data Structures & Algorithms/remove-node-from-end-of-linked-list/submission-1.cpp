class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *temp=head;
        int m=0;
        while(temp!=NULL)
        {
             m++;
             temp=temp->next;
        }
        if(m==1)
        return NULL;

        if(m==n)
        return head->next;
        ListNode *temp1=head;
        int k=m-n-1;
        for(int i=0;i<k;i++)
        {
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;
        return head;
        
    }
};
