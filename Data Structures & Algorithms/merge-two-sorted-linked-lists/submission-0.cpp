class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1!=NULL)
        {
            ans.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            ans.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(ans.begin(),ans.end());
         ListNode* newnode=new  ListNode(10);
         ListNode* temp3=newnode;
         for(auto &val :ans)
         {
            temp3->next=new ListNode(val);
            temp3=temp3->next;
         }
         return newnode->next;

    }
};
