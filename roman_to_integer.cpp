class Solution {
public:
    
        int romanToInt(string s) {
        
        map<char, int> ma = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}};
        
        int total = 0;
        for(int i = 0; i < s.length(); i++){
            if(ma[s[i+1]] <= ma[s[i]])  total += ma[s[i]]; 
            else  total -= ma[s[i]];  
        }
        return total;
    }
        
    
};