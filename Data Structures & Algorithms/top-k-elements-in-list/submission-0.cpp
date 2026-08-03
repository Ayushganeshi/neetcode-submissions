class Solution {
public:
    static bool cmp(pair<int,int>p1,pair<int,int>p2)
    {
          if(p1.second!=p2.second)
          {
            return p1.second>p2.second;
          }
          return p1.first>p2.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        vector<int>ans;
        //3->3
        //2->2
        //1->1................(3->3)()
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;



    }
};
