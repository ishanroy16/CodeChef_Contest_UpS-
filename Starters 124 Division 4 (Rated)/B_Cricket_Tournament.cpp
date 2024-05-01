#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t; cin>>t;
     while(t--)
     {
        int a,b; cin>>a>>b;
        if(a-1<b)
        {
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
     }
    return 0;
}