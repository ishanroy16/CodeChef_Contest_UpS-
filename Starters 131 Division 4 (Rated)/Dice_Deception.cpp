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
        for(int i=0;i<n;i++)
        {
            cin>>ar[i]; 
        }
       
        sort(ar.begin(),ar.end());
        int ans=0;
        for(int i=0;i<k;i++)
        {
          
            if(ar[i]==1)
            {
                ans+=6;
            }
            else if(ar[i]==2)
            {
                ans+=5;
            }
            else if(ar[i]==3)
            {
                ans+=4;
            }
            else{
                ans+=ar[i];
            }
        }
        // cout<<ans;
        for(int i=k;i<n;i++)
        {
            ans+=ar[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}