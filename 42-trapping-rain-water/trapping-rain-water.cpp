class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax = 0;
        int rytmax = 0;
        int water = 0;

        int left = 0;
        int ryt = n-1;

        while(left<=ryt){
            if(height[left]<=height[ryt]){
                if(height[left]>=leftmax){
                    leftmax = height[left];
                }
                else{
                    water = water + leftmax - height[left];
                }
                left++;
            }
            else{
                if(height[ryt]>=rytmax){
                    rytmax = height[ryt];
                }
                else{
                    water = water + rytmax - height[ryt];
                }
                ryt--;
            }
        }
        return water;
    }
};