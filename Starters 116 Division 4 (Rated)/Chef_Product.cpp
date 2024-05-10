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
        ll n; cin>>n;
        int x = sqrtl(n);
    if ((n-x*x)%2==1) x--;
    cout<<(x+1)/2<<endl;
        
    }
    return 0;
}