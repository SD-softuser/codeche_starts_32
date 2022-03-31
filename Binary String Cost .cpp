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
        int n,x,y; 
        string s; 
        cin>>n>>x>>y; 
        cin>>s; 
        if(x<y){
            sort(s.begin(), s.end());
            if(binary_search(s.begin(), s.end(), '1') && binary_search(s.begin(), s.end(), '0')){ 
                cout<<min(x,y)<<endl;
            } 
            else{ 
                cout<<0<<endl;
            }
        } 
        else{ 
            sort(s.begin(),s.end());
            reverse(s.begin(), s.end());
            if(binary_search(s.begin(), s.end(), '1') && binary_search(s.begin(), s.end(), '0')){ 
                cout<<min(x,y)<<endl;
            } 
            else{ 
                cout<<0<<endl;
            }
        }
       
    }
    return 0;
}