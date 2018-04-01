#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,x,faktor;
  long int prime;
  bool iniprim = true;
  cin>>a;
  for(int i = 0 ; i<a; i++){
    cin>>prime;
    iniprim=true;
    x=2;
    faktor = 0;
    while(x<=trunc(sqrt(prime)) && iniprim){
      if(prime %x == 0){
        faktor+=2;
       // cout<<"faktor trigger "<<faktor;
        if(faktor>2){
        iniprim = false;
        break;
      }
      }
      x++;
    }

    if(iniprim){
        cout<<"YA\n";
    }
    else{
      cout<<"BUKAN\n";
    }
    }
  }
