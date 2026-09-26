class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;

            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                continue;

                int left = j+1;
                int ryt = n-1;

                while(left < ryt){
                    long long sum = (long long) nums[i] + nums[j] + nums[left] + nums[ryt];

                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[left], nums[ryt]});

                        while(left < ryt && nums[left]==nums[left+1])
                        left++;
                        while(left < ryt && nums[ryt]==nums[ryt-1])
                        ryt--;

                        left++;
                        ryt--;
                    } else if(sum < target){
                        left++;
                    } else{
                        ryt--;
                    }
                }
            }
        }
        return ans;
    }
};