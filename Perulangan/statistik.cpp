#include <iostream>
using namespace std;
int main(){
  long int a,b;
  long int big,small;
  big = -100000;
  small = 0;
  cin>>a;
  for(int i = 0; i<a; i++){
    b=0;
    cin>>b;
    if(b>=big){
      big = b;
  if(i == 0){
      small = b;
  }
    }else if(b<big && b<small){
      small = b;
    }
  }
  cout<< big<<" "<<small<<"\n";
}
