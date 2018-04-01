#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a>>b;
  for(int x = 1; x<=a; x++){
    if(x % b == 0){
      if(x!=a){
      cout<<"* ";
      }else{
          cout<<"*";
      }
    }else{
        if(x!=a){
      cout<<x<<" ";
        }else{
             cout<<x;
        }
    }
  }
  cout<<"\n";
}
