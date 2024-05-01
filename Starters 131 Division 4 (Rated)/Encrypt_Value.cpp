#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar.begin(),ar.end());
        long long s=0;
        for(int i=0;i<n;i++)
        {
            if( s<=1 || ar[i]==1)
            {
                s+=ar[i];
            }
            else{
                s=(s*ar[i])%MOD;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}