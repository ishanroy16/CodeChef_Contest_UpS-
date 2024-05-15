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
        
        for(int i=0;i<n;i++) cin>>ar[i];
        int m=n/2;
        vi b;
        for(int i=0;i<n;i++)
        {
            b.push_back(ar[i]);
        }
        sort(ar.rbegin(),ar.rend());
        sort(b.begin(),b.end());
        for(int val:b)
        {
            // cout<<val<<" ";
        }
        int sum1=0,sum2=0,x=0;
        if(n%2==1)
        {
            x=n/2+1;
        }
        else{
            x=n/2;
        }
        for(int i=0;i<x;i++)
        {
            sum1+=ar[i];
        }
        for(int i=0;i<m;i++)
        {
            sum2+=b[i];
        }
        cout<<sum1-sum2<<"\n";
    }
    return 0;
}