class Solution {
public:
    bool checkRecord(string s) {
        int n = s.size();
        int a = 0;
        int l = 0;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='L') l++;
            else
                l=0;
            if(a>=2 || l>2) return false;
            
        }
            
        return true;
        
    }
};