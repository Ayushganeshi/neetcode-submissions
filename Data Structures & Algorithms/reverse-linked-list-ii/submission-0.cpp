class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        vector<int>ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin()+(left-1),ans.begin()+right);
        ListNode* newnode=new ListNode(10);
        ListNode* temp1=newnode;
        for(auto &val :ans)
        {
            temp1->next=new ListNode(val);
            temp1=temp1->next;
        }
        return newnode->next; 
    }
};