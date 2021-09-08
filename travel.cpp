#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n,a,b;
    while(t!=0)
    {
        int ans = 0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int i;
        for(i=0; i<n; i++)
        {
          if(s[i] == '0')
          {
              ans += a;
          }
          else{
              ans += b;
          }
        }
       cout<<ans<<endl;
        t--;
    }
    
	// your code goes here
	return 0;
}
