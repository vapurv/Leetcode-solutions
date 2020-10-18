#include<bits/stdc++.h>
using namespace std;
int pali(string x,string y)
{
    long long m = x.length();
    long long n = y.length();
    long long dp[m+1][n+1];
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
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string k;
        cin>>k;
        string l1 = k;
        reverse(k.begin(),k.end());
        int o = pali(k,l1);
        cout<<o<<endl;
    }
}