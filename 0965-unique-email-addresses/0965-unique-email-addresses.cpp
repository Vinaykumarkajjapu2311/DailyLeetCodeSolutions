class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(auto str:emails)
        {
            int i=0;
            int n=str.size();

            while(true)
            {
                if(str[i]=='@')break;
                if(str[i]=='+')
                {
                    str.erase(i,str.find('@')-i);
                    break;
                }
                if(str[i]=='.')
                {
                    str.erase(i,1);
                }
                else
                {
                    i++;
                }
            }
            st.insert(str);
        }
        return st.size();
    }
};