#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t; cin>>t;
     while(t--)
     {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int mx=INT_MIN;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr=v[i]*(n-i);
            mx=max(mx,curr);
        }
        cout<<mx<<"\n";
     }
    return 0;
}