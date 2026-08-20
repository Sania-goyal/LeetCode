class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int sum =0;
        int add =0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            add +=nums[i];
            sum -= nums[i];
            if((add-sum)%2==0)
            {
                count++;
            }
        }
        return count;
    }
};