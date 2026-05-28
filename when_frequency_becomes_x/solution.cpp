class Solution {
public:
    vector<int> solve(vector<int>& nums, vector<int>& queries, int x) {

        unordered_map<int,pair<int,int>> mp;
        vector<int> arr;

        for(int i=0;i<nums.size();i++)
        {
            int j = nums[i];

            mp[j].first++;

            if(mp[j].first == x)
            {
                mp[j].second = i;
            }
        }

        for(int i : queries)
        {
            if(mp.find(i)!=mp.end() && mp[i].first >= x)
            {
                arr.push_back(mp[i].second);
            }
            else
            {
                arr.push_back(-1);
            }
        }

        return arr;
    }
};
