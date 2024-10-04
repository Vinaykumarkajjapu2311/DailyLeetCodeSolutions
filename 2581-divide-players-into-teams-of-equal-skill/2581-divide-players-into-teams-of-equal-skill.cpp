class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        int n=skill.size();

        long long ts=skill[0]+skill[n-1];

        long long totalChem=0;

        for(int i=0;i<n/2;i++)
        {
            long long curr=(long long)skill[i] + (long long) skill[n-i-1];

            if(ts!=curr)return -1;

            totalChem+=(long long)skill[i] * (long long)skill[n-i-1];
        }

        return totalChem;
    }
};