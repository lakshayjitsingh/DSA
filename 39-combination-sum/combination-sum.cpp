class Solution {
public:

    void backtrack(vector<int>& candidates, int target,
                   int start,
                   vector<int>& temp,
                   vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] <= target) {
                temp.push_back(candidates[i]);
                backtrack(candidates,
                          target - candidates[i],
                          i,
                          temp,
                          ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(candidates, target, 0, temp, ans);
        return ans;
    }
};