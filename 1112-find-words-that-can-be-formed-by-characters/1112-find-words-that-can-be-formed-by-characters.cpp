class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      vector<int>charCount(26,0);
      for(auto it:chars)
      {
        charCount[it-'a']++;
      }

      int cnt=0;
      for(auto word:words)
      {
        vector<int>wordCount(26,0);
        for(auto it:word)
        {
            wordCount[it-'a']++;
        }
        bool possible=true;
        for(int i=0;i<26;i++)
        {
            if(wordCount[i]>charCount[i])
            {
                possible=false;
                break;
            }
        }
        if(possible)cnt+=word.size();
      }
      return cnt;
    }
};