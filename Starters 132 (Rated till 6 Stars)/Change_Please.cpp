#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t; cin>>t;
while(t--)
{
    int x; cin>>x;
    if(x%10==0){
        cout<<(100-x)<<"\n";
    }
    else{
        x=x/10;
        x=x+1;
        cout<<(100-x*10)<<"\n";
    }
}
}
