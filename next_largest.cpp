#include<bits/stdc++.h>
using namespace std;
void gre(int arr[],int n)
{
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        { 
            if(arr[i]<arr[j])
            {
                v.push_back(arr[j]);
                break;
            }
            if(j==n-1)
             {
                 v.push_back(-1);
             }
            
            
            
        }
        
        
    }
   v.push_back(-1);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
     gre(arr,n);
        
    
}