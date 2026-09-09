class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        vector<int>v;
        for(auto it : freq)
        {
            if(it.second>1)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};