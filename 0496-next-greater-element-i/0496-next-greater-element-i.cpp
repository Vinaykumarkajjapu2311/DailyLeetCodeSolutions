class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>nge(nums2.size(),-1);
        map<int,int>mpp;
     
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])st.pop();
            if(st.empty())nge[i]=-1;
            else
            nge[i]=st.top();

            st.push(nums2[i]);
        }
        vector<int>ans(nums1.size(),-1);

        for(int i=0;i<n;i++)
        {
            mpp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++)
        {
            ans[i]=nge[mpp[nums1[i]]];
        }
        return ans;

       
    }
};