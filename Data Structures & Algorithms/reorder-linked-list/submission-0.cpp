class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans1;
        int j=1;
        int m=ans.size();
        for(int i=0;i<m;i++)
        {
            if(i%2==0)
            {
                ans1.push_back(ans[i/2]);
            }
            else
            {
                ans1.push_back(ans[m-j]);
                j++;
            }
        }
        
        ListNode* temp1=head;
        for(auto &val :ans1)
        {
            temp1->val =val;
            temp1=temp1->next;
        }
        

    }
};
