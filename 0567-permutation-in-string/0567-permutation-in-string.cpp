class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.size() > s2.size())
            return false;

        vector<int> s1Freq(26, 0), s2Freq(26, 0);
        int k = s1.size(); // WinSize
        int n = s2.size(); // s2 size

        for (int i = 0; i < k; i++) // Add first Window
        { 
            s1Freq[s1[i] - 'a']++;
            s2Freq[s2[i] - 'a']++;
        }

        if(s1Freq == s2Freq) return true;

        for (int i = k; i < n; i++)
        {
            // ADD CHAR
            int index = s2[i] - 'a';
            s2Freq[index]++;

            // REMOVE CHAR
            index = s2[i - k] - 'a';
            s2Freq[index]--;

            if(s1Freq == s2Freq) return true;

        }
        return false;
    }
};