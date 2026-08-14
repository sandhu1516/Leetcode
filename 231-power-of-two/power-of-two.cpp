class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0)
        return false;

        int x = 0;
        for(int i=0; pow(2,x)<=n; i++){
            if(n == pow(2,x)){
                return true;
            }
            x++;
        }
        return false;
    }
};