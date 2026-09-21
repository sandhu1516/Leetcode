class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int left = 0;
        int ryt = n-1;

        while(left<=ryt){
            int sum = numbers[left] + numbers[ryt];

            if(sum == target){
                return{left+1, ryt+1};
            }
            else if(sum < target){
                left++;
            }
            else{
                ryt--;
            }
        }
        return {};
    }
};

