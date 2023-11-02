class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t sz = nums.size();
        vector<int> result;

        bool found = false;

        for (short i = 0; i < sz; i++) {
            for (short j = i + 1; j < sz; j++) {
                if (nums[j] + nums[i] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }

            if (found) break;
        }

        return result;
    }
};
