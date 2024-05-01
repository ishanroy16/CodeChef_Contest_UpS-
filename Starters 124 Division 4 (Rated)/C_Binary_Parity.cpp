#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%2);
            n/=2;
        }
        reverse(v.begin(),v.end());
        int sum=0;
        for(int val:v)
        {
            sum+=val;
        }
        if(sum%2==1)
        {
            cout<<"ODD"<<"\n";
        }
        else cout<<"EVEN"<<"\n";
       
    }
    return 0;
}