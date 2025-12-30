#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){ 
    int len;
    cin>>len;
    int even=0,odd=0;
    for(int j=0;j<len;j++){
        int x;
        cin>>x;
        if(x%2!=0) odd++;
        else even++;
    }
    if (odd == 0) {
            cout << "NO\n";
        } else if (even == 0 && len % 2 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
  }
    return 0;
}
