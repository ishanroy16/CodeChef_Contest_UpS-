#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        vector<int>index;
        int previ=1;
        for(int i=0;i<n;i+=2)
        {
            if(s[i]!=s[i+1])
            {
                if(previ!=(s[i]-'0'))
                {
                    index.push_back(i);
                    previ=(s[i]-'0');
                }
                else{
                    index.push_back(i+1);
                    previ=(s[i+1]-'0');
                }
            }
        }
        cout<<index.size()<<"\n";
        for(int val:index)
        {
            cout<<val+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}