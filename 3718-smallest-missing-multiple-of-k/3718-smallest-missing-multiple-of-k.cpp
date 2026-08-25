class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int m; 
        int i=1;
        while(true)
        {
            int multiple = k*i;
            if (find(nums.begin(), nums.end(), multiple) != nums.end())
            {
               i++;
            }
            else
            {
                m= multiple;
                break;
            }
        }
        return m;
    }
};