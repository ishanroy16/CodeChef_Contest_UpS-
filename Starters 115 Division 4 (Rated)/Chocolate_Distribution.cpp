#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        if(x==1)
        {
            cout<<1<<" "<<1<<"\n";
        }
        else{
            if(x%2==0) cout<<x/2<<" "<<x<<"\n";
            if(x%2!=0) cout<<x/2+1<<" "<<x<<"\n";
        }
    }
}
