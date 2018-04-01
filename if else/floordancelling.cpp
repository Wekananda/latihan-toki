#include <bits/stdc++.h>
using namespace std;

int main(){
  double b;
  int f,c;
  cin>>b;
  if(trunc(b) == b){
    f = b;
    c = b;
    cout<<f<<" "<<c<<"\n";
  }
  else if(b>0){
    f = trunc(b) ;
    c = trunc(b)+1;
      cout<<f<<" "<<c<<"\n";
}else{
    f = trunc(b)-1;
    c = trunc(b);
      cout<<f<<" "<<c<<"\n";
}
}
