#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int rev_a=(a%10)*10+(a/10);
        int rev_b=(b%10)*10+(b/10);
        if(a>b) cout<<"Yes"<<"\n";
        else if(rev_a>b) cout<<"Yes"<<"\n";
        else if(rev_b<a) cout<<"Yes"<<"\n";
        else if(rev_a>rev_b) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}