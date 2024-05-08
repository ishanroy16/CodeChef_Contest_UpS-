#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
const int maxN=1e2+9;

int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vi bits(maxN);
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            int pos=0,cnt=count(s.begin(),s.end(),'1');
            if(cnt==1)
            {
                for(int j=k-1;j>=0;j--)
                {
                    if(s[j]=='1')
                    {
                        bits[pos]=1;
                        break;
                    }
                    pos++;
                }
            }
        }
            bool found=true;
            for(int i=0;i<k;i++)
            {
                if(bits[i]==0)
                {
                    found=false;
                    break;
                }
            }
            if(found) {
                yes;
            }
            else no;
        
    }
    return 0;
}