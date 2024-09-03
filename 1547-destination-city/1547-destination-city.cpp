class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>mpp;
        for(auto it:paths)
        {
            mpp[it[0]]=1;
        }

        for(auto it:paths)
        {
            if(mpp.find(it[1])==mpp.end())
            {
                return it[1];
            }
        }
        return "";


    }
};