class Solution {
public:
    void func(int i,int n,vector<int>&ans)
    {
        if(i>n)return;
        ans.push_back(i);
        for(int j=0;j<10;j++)
        {
            func(i*10+j,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;

        for(int i=1;i<=9;i++)
        {
            func(i,n,ans);
        }
        return ans;
    }
};