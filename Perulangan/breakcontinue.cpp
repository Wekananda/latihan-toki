#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a;
  for(int i = 1; i<=a; i++){
    if(i % 10 == 0){
      continue;
    }
    if(i == 42){
      cout <<"ERROR\n";
      break;
    }
    cout<<i<<"\n";
  }
}
