#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,size,i,a[1000],psum=0,neg=0;
  cin>>size;
  for(int k=1;k<=size;k++){
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]>0){
      psum+=a[i];
    }
    else
    neg++;
  }
  cout<<"Case "<<k<<": "<<psum<<" "<<neg<<endl;
psum=0;
neg=0;
  }
  return 0;
}
