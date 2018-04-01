#include <bits/stdc++.h>
using namespace std;

bool iniprima(int x){
  bool iniprim= true;
  int i = 2;


  while(i<=trunc(sqrt(x)) && iniprim){
    if((x %i) == 0){
      iniprim = false;
    }
    i++;
  }
  return iniprim;
}

int pangkat(long int x,int y){
  int count = 0;
  while(x % y == 0){
    x=x/y;
    count++;
  }
  if(count>1){
    cout<<y<<"^"<<count;
  }else if(count ==1){
    cout<<y;
  }
  return x;
}
int main() {
  long int n;
  int i = 2;
  int jumlah = 0;
  cin>>n;

  while(n>1){
    if(iniprima(i) && n%i==0){
      if(jumlah>0){
          cout<<" x ";
      }
      n = pangkat(n,i);
      //cout<<n;
      jumlah++;

    }
    i++;
  }
  cout<<"\n";
}
