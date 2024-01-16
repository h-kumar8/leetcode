class Solution {
public:
    void sols(vector<int>& nums, int a, vector<int>& sub,
              vector<vector<int>>& ans) {
        ans.push_back(sub);
        for (int i = a; i < nums.size(); i++) {
            sub.push_back(nums[i]);
            sols(nums, i + 1, sub, ans);
            sub.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        sols(nums, 0, sub, ans);
        return ans;
    }
};