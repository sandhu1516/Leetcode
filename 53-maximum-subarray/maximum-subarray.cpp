class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int prefix = 0;
        int maxsum = nums[0];

        for(int i=0;i<n;i++){
            prefix = prefix + nums[i];
            maxsum = max(maxsum,prefix);

            if(prefix < 0)
            prefix = 0;
        }
        return maxsum;
    }
};