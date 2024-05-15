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
        int n; cin>>n;
        vi ar(n);
        for(int i=1;i<=n;i++) cin>>ar[i];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
           int left=ar[i];
           if(left==1) ans+=n;
           else{
            int power=1;
            for(int j=1;j<=n;j++)
            {
                power=left*power;
                if(power>100000000)
                {
                    break;
                }
                else{
                    int ri=ar[j];
                    if(power<=ri){
                        ans++;
                    }
                }
            }
           }
        }
        cout<<ans<<"\n";
    }
    return 0;
}