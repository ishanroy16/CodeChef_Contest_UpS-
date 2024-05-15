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
        int n; cin>>n;
        string s; cin>>s;
        int total_a=0,curr_a=0,cnt_b=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                curr_a++;
            }
            else if(s[i]=='b')
            {
                total_a+=curr_a;
                cnt_b=1;
                curr_a=0;
            }
            else{
                if(cnt_b==1)
                {
                    if(total_a==0)
                    {
                        cnt_b=0;
                        continue;
                    }
                    else{
                        ans++;
                        total_a--;
                    }
                }
            }
        }
    cout<<ans<<"\n";
    }
    return 0;
}