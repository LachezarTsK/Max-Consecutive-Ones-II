
public class Solution {

    public int findMaxConsecutiveOnes(int[] nums) {
        int leftConsecutive = 0;
        int rightConsecutive = 0;
        int maxConsecutive = 0;

        for (int n : nums) {
            ++rightConsecutive;
            if (n == 0) {
                leftConsecutive = rightConsecutive;
                rightConsecutive = 0;
            }
            maxConsecutive = Math.max(maxConsecutive, leftConsecutive + rightConsecutive);
        }
        return maxConsecutive;
    }
}
