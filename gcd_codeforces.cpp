#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    int n ;
    cin>>n;
    int count = 0;
    vector<int> v(n);
    vector<int> ans;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(__gcd(v[i],v[j]*2)>1)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}