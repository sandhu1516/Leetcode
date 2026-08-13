class Solution {
 public:
     int addDigits(int num) {
         while(num > 9){
                int sum = 0;
                int rmd;

             while(num > 0){
                 rmd = num % 10;
                 sum = sum + rmd;
                 num = num / 10;
             }
             num = sum;
         }
         return num;
     }
 };


