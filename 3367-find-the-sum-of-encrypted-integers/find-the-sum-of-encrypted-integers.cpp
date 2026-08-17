class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum =0;
       for(int i=0;i<nums.size();i++)
       {
        int mx =0;
        int count =0;
        while(nums[i]>0)
        {
            mx = max(mx,nums[i]%10);
            nums[i]=nums[i]/10;
            count++;
        }
        while(count>0)
        {
            nums[i] = nums[i]*10+mx;
            count--;
        }
       }
       for(int i=0;i<nums.size();i++)
    {
        sum +=nums[i];
    } 
    return sum;
    }
};