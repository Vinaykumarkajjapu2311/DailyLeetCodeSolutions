class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mpp;
        string word="";
        vector<string>ans;
        for(auto it:s1)
        {
            if(it!=' ')
            {
               word+=it;
            }
            else if(it==' ')
            {
                ans.push_back(word);
                word="";
            }
        }
        ans.push_back(word);

        word="";
        for(auto it:s2)
        {
            if(it!=' ')
            {
               word+=it;
            }
            else if(it==' ')
            {
                ans.push_back(word);
                word="";
            }
        }
        ans.push_back(word);

        for(string s :ans)
        {
            mpp[s]++;
        }
        vector<string>final;

        for(auto it:mpp)
        {
            if(it.second==1)
            {
                final.push_back(it.first);
            }
        }

       
        return final;
    }
};