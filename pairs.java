class Solution {
    
    int getIndex(int y[] , int n , int ele){
        
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(y[mid] >ele){
                ans = mid;
                high  =mid -1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
    
    
    long countPairs(int[] x, int[] y, int m, int n) {
        
        int zeros = 0,one = 0 , three = 0 , four = 0,two= 0;
        Arrays.sort(x);
        Arrays.sort(y);
        
        for(int i  =0;i<n;i++){
            if(y[i]==0)zeros++;
            if(y[i]==1)one++;
            if(y[i]==3)three++;
            if(y[i]==4)four ++;
            if(y[i]==2)two++;
        }
        
        //traversing x elements
        long ans = 0;
        for(int i =0;i<m;i++){
            if(x[i]==0){
                continue;
            }
            else if(x[i]==1){
               ans +=zeros; 
            }
            else if(x[i]==2){
                int index = getIndex(y , n , 2);
                if(index != -1){
                    ans += n - index;
                }
                ans -=three;
                ans -=four;
                ans += one +zeros;
            }
            else{
                int index = getIndex(y , n , x[i]);
                if(index!=-1){
                    ans+=n-index;
                }
                ans += one +zeros;
                if(x[i]==3){
                    ans+=two;
                }
            }
        }
        return ans;
        
    }
}
