#include <bits/stdc++.h>
using namespace std;

int a,b,k,x;
int fungsi(int a,int b,int x){
    return abs((a*x)+b);
}
int main() {
  cin>>a>>b>>k>>x;
  for(int i=0; i<k; i++){
      x = fungsi(a,b,x);
  }
  cout<< x<<"\n";
}
