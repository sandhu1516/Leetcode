class Solution {
    public String[] findRelativeRanks(int[] score) {
          int n = score.length;
        String[] ans = new String[n];

        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            map.put(score[i], i);
        }

        int[] sorted = score.clone();
        Arrays.sort(sorted);

        for (int i = 0; i < n; i++) {
            int rank = n - i;
            int originalIndex = map.get(sorted[i]);

            if (rank == 1)
                ans[originalIndex] = "Gold Medal";
            else if (rank == 2)
                ans[originalIndex] = "Silver Medal";
            else if (rank == 3)
                ans[originalIndex] = "Bronze Medal";
            else
                ans[originalIndex] = String.valueOf(rank);
        }

        return ans;
    }
}