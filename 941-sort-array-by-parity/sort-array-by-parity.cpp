class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        for(int i=0;i<even.size();i++)
        {
            nums[i]=even[i];
        }
        for(int j=0;j<odd.size();j++)
        {
            nums[even.size()+j]=odd[j];
        }
        return nums;
    }
};