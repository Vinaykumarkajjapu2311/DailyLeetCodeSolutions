class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        map<string,vector<string>>mpp;
        for(int i=0;i<arr.size();i++)
        {
            string s=arr[i];
            sort(s.begin(),s.end());
            mpp[s].push_back(arr[i]);
        }

        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};