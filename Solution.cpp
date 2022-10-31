
#include <vector>
using namespace std;

class Solution {
    
public:
    int findMaxConsecutiveOnes(const vector<int>& nums) const {
        int leftConsecutive = 0;
        int rightConsecutive = 0;
        int maxConsecutive = 0;

        for (const auto& n : nums) {
            ++rightConsecutive;
            if (n == 0) {
                leftConsecutive = rightConsecutive;
                rightConsecutive = 0;
            }
            maxConsecutive = max(maxConsecutive, leftConsecutive + rightConsecutive);
        }
        return maxConsecutive;
    }
};
