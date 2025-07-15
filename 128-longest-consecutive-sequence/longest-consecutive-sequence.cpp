class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int ans = 1;        // At least one number exists
        int cur_max = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue; // skip duplicates
            }
            else if (nums[i] == nums[i - 1] + 1) {
                cur_max++;
            }
            else {
                ans = max(ans, cur_max);
                cur_max = 1;
            }
        }

        ans = max(ans, cur_max);
        return ans;
    }
};
