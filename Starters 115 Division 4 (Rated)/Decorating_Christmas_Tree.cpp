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
    int t; cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int ans=0;
        ans+=y/3;
        if(ans>x)
        {
            ans=x;
        }
        else{
            x=x-ans;
            ans+=x/2;
        }
        
        // cout<<x<<" "<<y<<" "<<ans;
        
        if(ans>=n){
            yes;
        }
        else no;
    }
    return 0;
}