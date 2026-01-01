#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long num;
  cin>>num;
  int rem=num%19;
  long long cnt=0, tmp=num;
  while(tmp){
      cnt++;
      tmp=tmp/10;
  }
  for(int i=0;i<cnt;i++){
      long long p=pow(10,i);
      int cd=(num/p) %10;
      if(i==cnt-1 && cd==9){
          continue;
      }
      if(cd>4){
          num=num+(9-(2*cd))*p;
      }
  }
  cout<<num<<endl;
  return 0;
}
