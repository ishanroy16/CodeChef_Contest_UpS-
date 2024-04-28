#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     
   int t; cin>>t;
   while(t--)
   {
     int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int first=ar[0];
    bool flag=true;
    if(ar[0]!=ar[n-1])
    {
       flag= false;
        // continue;
    }
    for(int i=1;i<n-1;i++)
    {
        if(ar[i]<first)
        {
            flag=false;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
   }
    return 0;
}