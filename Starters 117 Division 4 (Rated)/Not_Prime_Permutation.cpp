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
        vi a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>v;
        if(n<=2)
        {
            cout<<-1;
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(a[i]==1)
                {
                    v.push_back(3);
                }
                else if(a[i]==3)
                {
                    v.push_back(1);
                }
                else
                v.push_back(a[i]);
                
            }
        }
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<"\n";
    }
    return 0;
}