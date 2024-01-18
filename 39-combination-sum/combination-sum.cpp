class Solution {
public:
    vector<int> temp;
    void func(vector<int>& candidates, int target,vector<vector<int>> &ans,int index){

        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int it=index;it<candidates.size();it++){
            temp.push_back(candidates[it]);
            if(target-candidates[it]>=0){
                func(candidates,target-candidates[it],ans,it);
            }    
            temp.pop_back();
        }
    }
     
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        func(candidates,target,ans,0);
        return ans;
    }
};