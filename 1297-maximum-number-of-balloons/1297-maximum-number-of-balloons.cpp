class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnta=0,cntb=0,cntl=0,cnto=0,cntn=0;
        int ans=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]=='a')cnta++;
            else if(text[i]=='b')cntb++;
            else if(text[i]=='l')cntl++;
            else if(text[i]=='o')cnto++;
            else if(text[i]=='n')cntn++;

            if(cnta>=1 && cntb>=1 && cntl>=2 && cnto>=2 && cntn>=1)
            {
                ans++;
                cnta-=1;
                cntb-=1;
                cntl-=2;
                cnto-=2;
                cntn-=1;
            }
        }
    return ans;
        
    }
};