#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> helper(int n){
    vector<int>ans;
    int cnt=0;
    while(n){
        int p=pow(10,cnt++);
        int rem=n%10;
        int val=rem*p;
        if(val>0) ans.push_back(val);
        n=n/10;
    }
    return ans;
}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>ans=helper(n);
       cout<<ans.size()<<endl;
      for(int i:ans){
          cout<<i<<" ";
      }
       cout<<endl;
   }

    return 0;
}
