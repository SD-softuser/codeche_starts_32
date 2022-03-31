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
        int n,m,k; 
        cin>>n>>m>>k; 
        if((m-k)>=n){ 
            cout<<"YES"<<endl;
        } 
        else{ 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}