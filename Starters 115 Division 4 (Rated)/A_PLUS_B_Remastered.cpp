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
        vi a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());
        vi c(n);
        for(int i=0;i<n;i++){
            c[i]=a[i]+b[i];
        }
        bool flag=true;
        for(int val:c)
        {
            if(val!=c[0])
            {
                flag=false;
                break;
            }
        }
        if(flag) {
            for(int val:a)
            {
                cout<<val<<" ";
            }
            cout<<"\n";
            for(int val:b)
            {
                cout<<val<<" ";
            }
        }
        else cout<<-1<<"\n";
        cout<<"\n";
    }
    return 0;
}