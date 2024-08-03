class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            mpp[target[i]]--;
        }

        for(auto it:mpp)
        {
            if(it.second!=0)return false;
        }
        return true;
    }
};