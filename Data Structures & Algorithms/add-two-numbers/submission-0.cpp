class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>v1,v2;
        ListNode* temp1=l1;
        while(temp1!=NULL)
        {
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }

        ListNode* temp2=l2;
        while(temp2!=NULL)
        {
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        vector<int>ans;
        int carry=0;
        int i=0;
        while(i<v1.size() || i<v2.size() || carry!=0)
        {
            int sum=carry;
            if(i<v1.size())sum+=v1[i];
            if(i<v2.size())sum+=v2[i];
            ans.push_back(sum%10);
            carry=sum/10;
            i++;
        }
        ListNode* newnode=new ListNode(10);
        ListNode* temp=newnode;
        for(auto &val :ans)
        {
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        return newnode->next;
        
        


    }
};
