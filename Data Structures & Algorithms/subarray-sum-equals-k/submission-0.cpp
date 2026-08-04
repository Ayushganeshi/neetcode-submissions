class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int res=0;
        int currsum=0;

        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            if(currsum==k)res++;
            if(mp.find(currsum-k)!=mp.end())
            {
                res+=mp[currsum-k];
            }
            mp[currsum]++;

        }
        return res;
    }
};