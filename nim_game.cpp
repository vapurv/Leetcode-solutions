class Solution {
public:
    bool canWinNim(int n) {
        if(n==1 or n==2) return true;
        if(n%4) return true;
        return false;
        
    }
};