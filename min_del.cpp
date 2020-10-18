#include<bits/stdc++.h>
using namespace std;
int del(string x,string y,int m)
{
    int n= y.length();
    int dp[m+1][n+1];
    for(int i = 0;i<m+1;i++)
    {
        dp[i][0]=0;
    }
    for(int i = 0;i<n+1;i++)
    {
        dp[0][i]=0;
    }
    for(int i = 1;i<m+1;i++)
    {
        for(int j = 1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]= 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int p = m-dp[m][n];
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string m ;
        cin>>m;
        string s = m;
        reverse(m.begin(),m.end());
        int lop = del(m,s,n);
        cout<<lop<<endl;
    }
}