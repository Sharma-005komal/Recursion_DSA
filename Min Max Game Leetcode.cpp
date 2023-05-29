class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        vector<int> ans;
        for(int i=0; i<n/2; i++)
        {
            if(i%2 == 0)
            {
                ans.push_back(min(nums[2*i], nums[2*i+1]));
            }
            else
            {
                ans.push_back(max(nums[2*i], nums[2*i+1]));
            }
        }
        return minMaxGame(ans);
    }
};
