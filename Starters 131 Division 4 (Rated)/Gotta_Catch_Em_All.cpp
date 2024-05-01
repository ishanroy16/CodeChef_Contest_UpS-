#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(x*ar[i] <=y)
            {
                ans+=(x*ar[i]);
            }
            else{
                ans+=y;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}