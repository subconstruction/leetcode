class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        short m = nums.size();

        for (short i = 0; i < m; i++) {
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};
