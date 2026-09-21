class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for(int i=0;i<n;i++){
              int required = target - numbers[i];
              int start = i+1;
              int end = n-1;

            while(start<=end){
                int mid = start +(end-start)/2;

                if(numbers[mid]==required){
                    return {i+1,mid+1};
                }
                else if(numbers[mid]<required){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return {};
    }
};



// BRUTE FORCE
// int n = numbers.size();

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i] + numbers[j] == target){
//                     return {i+1 ,j+1};
//                 }
//             }
//         }