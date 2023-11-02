class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = { -1, -1 };

        size_t sz = nums.size();
        short i = 0;

        for (int j = 0; j < sz; j++) {
            if (nums[j] == target) {
                result[i] = j;

                if (i < 1) i++;
            }
        }

        if (result[1] == -1 & result[1] != result[0]) result[1] = result[0]; 

        return result;
    }
};
