class Solution {
 
    private int[] maxSubsequence(int[] nums, int k) {
        int n = nums.length;
        int[] stack = new int[k];
        int top = -1;
        int remain = n;
        
        for (int num : nums) {
            while (top >= 0 && stack[top] < num && (remain + top >= k)) {
                top--;
            }
            if (top + 1 < k) {
                stack[++top] = num;
            }
            remain--;
        }
        return stack;
    }
    
   
    private int[] merge(int[] nums1, int[] nums2) {
        int x = nums1.length, y = nums2.length;
        int[] merged = new int[x + y];
        int i = 0, j = 0, r = 0;
        
        while (i < x || j < y) {
            if (greater(nums1, i, nums2, j)) {
                merged[r++] = nums1[i++];
            } else {
                merged[r++] = nums2[j++];
            }
        }
        return merged;
    }
    
 
    private boolean greater(int[] nums1, int i, int[] nums2, int j) {
        while (i < nums1.length && j < nums2.length && nums1[i] == nums2[j]) {
            i++;
            j++;
        }
        return j == nums2.length || (i < nums1.length && nums1[i] > nums2[j]);
    }
    
  
    public int[] maxNumber(int[] nums1, int[] nums2, int k) {
        int m = nums1.length, n = nums2.length;
        int[] best = new int[k];
        
        for (int i = Math.max(0, k - n); i <= Math.min(k, m); i++) {
            int[] subseq1 = maxSubsequence(nums1, i);
            int[] subseq2 = maxSubsequence(nums2, k - i);
            int[] candidate = merge(subseq1, subseq2);
            if (greater(candidate, 0, best, 0)) {
                best = candidate;
            }
        }
        return best;
    }
}
