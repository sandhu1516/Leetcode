class Solution {
public:
    int reverse(int x) {
        int rmd;
        long long reverse = 0;

        while(x!=0){
            rmd = x % 10;
            reverse = reverse * 10 + rmd;
            x = x / 10;
        }

        if(reverse > INT_MAX || reverse < INT_MIN)
        return 0;
        
        return reverse;
    }
};