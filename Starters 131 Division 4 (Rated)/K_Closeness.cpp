#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        int mx=0;
        for(int i=0;i<n;i++) 
        {
            cin>>ar[i];
            mx=max(mx,ar[i]);
        }
        for(int i=0;i<n;i++)
        {
            ar[i]+=((mx-ar[i])/k)*k;
        }
        sort(ar.begin(),ar.end());
        int mn=ar[n-1]-ar[0];
        for(int i=0;i<n-1;i++)
        {
            int ans=(ar[i]+k)-ar[i+1];
            mn=min(mn,ans);
        }
        cout<<mn<<"\n";
    }
    return 0;
}