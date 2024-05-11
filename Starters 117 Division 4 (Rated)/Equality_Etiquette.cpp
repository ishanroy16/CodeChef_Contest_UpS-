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
        int a,b; cin>>a>>b;
        int d=abs(a-b);
        int n=sqrtl(2*d);
        if(d==0)
        {
            cout<<0<<"\n";
        }
        else{
            while(((n*(n+1))/2)<d) n++;
            while(((n*(n+1))/2)%2!=d%2) n++;
            cout<<n<<"\n";
        }
    }
    //this code not understand ,youtube channel(codenzyme)
    return 0;
}