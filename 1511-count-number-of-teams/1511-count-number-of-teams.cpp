class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            int ll=0,ls=0,rl=0,rs=0;
            for(int j=0;j<i;j++)
            {
                if(rating[j]<rating[i])
                {
                    ls++;
                }
                if(rating[j]>rating[i])
                {
                    ll++;
                }
            }

            for(int j=i+1;j<n;j++)
            {
                if(rating[j]>rating[i])rl++;
                if(rating[j]<rating[i])rs++;
            }

            res+=(ls*rl)+(rs*ll);
        } 
    return res;
    }
};