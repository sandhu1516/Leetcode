class Solution {
    public int bitwiseComplement(int n) {
       int ans = 0;
       int rmd;
       int mul = 1;

       if(n == 0){
        return 1;
       }

       while(n > 0 ){
        rmd = n % 2;
        rmd = rmd ^ 1;
        n = n / 2;
        ans = ans + rmd * mul;
        mul = mul * 2;
       }
       return ans;
    }
}