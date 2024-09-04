class Solution {
public:
    void f(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int n)
    {
        if(ind==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            f(ind,target-arr[ind],arr,ans,ds,n);
            ds.pop_back();
        }

        f(ind+1,target,arr,ans,ds,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n=candidates.size();
        vector<int>ds;
        f(0,target,candidates,ans,ds,n);
        return ans;
        
    }
};