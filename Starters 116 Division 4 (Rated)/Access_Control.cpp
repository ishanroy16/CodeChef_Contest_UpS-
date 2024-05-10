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
        int n,x; cin>>n>>x;
        string s;
        cin>>s;
        ll ans=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') ans=x;
            else ans-=1;
            if(ans<0) {
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<"\n";
        else no;
        
    }
    return 0;
}