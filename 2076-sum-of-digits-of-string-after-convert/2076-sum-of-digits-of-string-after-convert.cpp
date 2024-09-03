class Solution {
public:
    string getSum(string val)
    {
        int sum=0;
        for(auto it:val)
        {
            sum+=(it-'0');
        }
        return to_string(sum);
    }
    int getLucky(string s, int k) {
        string sum="";
        for(auto it:s)
        {
            int val=it-'a'+1;
            sum+=to_string(val);
        }

        while(k--)
        {
            sum=getSum(sum);
        }
        return stoi(sum);
    }
};