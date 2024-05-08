#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
       sort(a.begin(),a.end(),greater<int>());
       sort(b.begin(),b.end(),greater<int>());
       long long total=0;
       if(n>=4 && m>=4 && n+m>11)
       {
       

       for(int i=0;i<4;i++)
       {
        total+=a[i];
       }
       for(int i=0;i<4;i++)
       {
        total+=b[i];
       }
       vector<int>v;
       for(int i=4;i<n;i++)
       {
        v.push_back(a[i]);
       }
       for(int i=4;i<m;i++)
       {
        v.push_back(b[i]);
       }
       sort(v.begin(),v.end(),greater<int>());
       for(int i=0;i<3;i++)
       {
        total+=v[i];
       }
       cout<<total<<"\n";
       }
       else if(n+m==11 && (n>=4 && m>=4))
       {
        for(int i=0;i<n;i++)
        {
            total+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            total+=b[i];
        }
        cout<<total<<"\n";
       }
       else {
        cout<<-1<<"\n";
       }
    }
    return 0;
}