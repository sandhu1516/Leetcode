class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int current = 0;
        int ryt = nums.size()-1;

        while(current <= ryt){
            if(nums[current]==0){
                int temp = nums[current];
                nums[current] = nums[left];
                nums[left] = temp;
                left++;
                current++;
            }
            else if(nums[current]==1){
                current++;
            }
            else{
                int temp = nums[current];
                nums[current] = nums[ryt];
                nums[ryt] = temp;
                ryt--;
            }
        }
    }
};