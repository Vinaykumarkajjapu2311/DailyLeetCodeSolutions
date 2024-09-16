class Solution {
public:
    string fractionToDecimal(int num, int den) {
        if(!num)return "0";

        string ans="";
        if (num > 0 ^ den > 0) ans += '-';
        long nums=abs(num);
        long dens=abs(den);
        long  upper=nums/dens;
        ans += to_string(upper);
        long rem=nums%dens;
       


        if(rem==0)return ans;
        ans.push_back('.');
        

        unordered_map<int,int>mpp;
        while(rem)
        {
            if(mpp.find(rem)!=mpp.end())
            {
                ans.insert(mpp[rem],"(");
                ans.push_back(')');
                break;
            }
            else
            {
                mpp[rem]=ans.size();
                int temp=(rem*10)/dens;
                ans+=to_string(temp);
                rem=rem*10%dens;
            }
        }
        return ans;
    }
};