class Solution {
public:
    vector<int> diffWaysToCompute(string e) {
        vector<int>res;
        for(int i=0;i<e.size();i++)
        {
            char c=e[i];
            if(c=='-' || c=='+'||c=='*')
            {
                string s1=e.substr(0,i);
                string s2=e.substr(i+1);
                vector<int>a1=diffWaysToCompute(s1);
                vector<int>a2=diffWaysToCompute(s2);

                for(auto it:a1)
                {
                    for(auto yt:a2)
                    {
                        if(c=='-')
                        {
                            res.push_back(it-yt);
                        }
                        else if(c=='+')
                        {
                            res.push_back(it+yt);
                        }
                        else if(c=='*')
                        {
                            res.push_back(it*yt);
                        }

                    }
                }
            }
        }
        if(res.size()==0)res.push_back(stoi(e));
        return res;
    }
};