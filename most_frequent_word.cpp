string mostFrequentWord(string arr[], int n) {
    map<string, int> mp;    // stores frequency of each character
    map<string, int> indi;  // stores first occurrence of each character
    
    // count frequency of each word in arrayunordered_
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
        if(indi.find(arr[i]) == indi.end()) // denoting first occurrence of string 
            indi[arr[i]] = i;
    }
        
    int res = INT_MIN;
    string word="";
    int index = -1;
    
    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]] > res)
        {
            res = mp[arr[i]];   // new maximum frequency
            index = indi[arr[i]];
            word = arr[i];
        }
        else if(mp[arr[i]] == res)
        {
            if(indi[arr[i]] > index)    // for same frequency update if first occurrence is later
            {
                index = indi[arr[i]];
                word = arr[i];
            }
        }
    }
    
    return word;
    
}