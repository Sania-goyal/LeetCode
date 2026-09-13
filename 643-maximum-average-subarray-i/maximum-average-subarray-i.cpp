class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum += nums[i];
        }
        ans =  (double)sum/k;
        int mx = ans;
        double avg;
        for(int i=k;i<nums.size();i++)
        {
            sum +=nums[i];
            sum -=nums[i-k];
            avg = (double)sum/k;
            if(avg>ans)
            {
                ans =avg;
            }
        }
        return ans;
    }
};