class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=2,a[n];
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a[0]=i;
                    a[1]=j;
                    return {i,j};
                }
            }
        }
        return {};
    }
};