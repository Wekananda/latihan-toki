#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,x;
  long int prime;
  bool iniprim = true;
  cin>>a;
  for(int i = 0 ; i<a; i++){
    cin>>prime;
    iniprim=true;
    x=2;

    while(x<=trunc(sqrt(prime)) && iniprim){
      if(prime %x == 0){
        iniprim = false;
      }
      x++;
    }

    if(prime == 1){
      cout<<"BUKAN\n";
    }else if(iniprim){
        cout<<"YA\n";
    }
    else{
      cout<<"BUKAN\n";
    }
  }

}
