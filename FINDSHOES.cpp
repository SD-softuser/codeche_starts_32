#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin>>t; 
    while(t--){ 
        int n,m;
        cin>>n>>m; 
        if(n>=m){ 
            cout<<(n-m+n)<<endl; 
        }
        else{ 
            cout<<n<<endl;
        }
    }
    return 0;
}