
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
    let leftConsecutive = 0;
    let rightConsecutive = 0;
    let maxConsecutive = 0;

    for (let n of nums) {
        ++rightConsecutive;
        if (n === 0) {
            leftConsecutive = rightConsecutive;
            rightConsecutive = 0;
        }
        maxConsecutive = Math.max(maxConsecutive, leftConsecutive + rightConsecutive);
    }
    return maxConsecutive;
};
