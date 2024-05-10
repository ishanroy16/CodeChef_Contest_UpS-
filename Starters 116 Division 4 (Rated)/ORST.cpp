#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vi a(n),b(m),v;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        } 
        int mx=0;
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            if(mx<b[i]) mx=b[i];
        } 
        for(int j=n-mx;j<n;j++)
        {
            v.push_back(a[j]);
        }
        sort(v.begin(),v.end());
        vi vv;
        for(int i=0;i<n-mx;i++)
        {
            vv.push_back(a[i]);
        }
        for(int val:v)
        {
            vv.push_back(val);
        }
        for(int val:vv)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
    }
    return 0;
}