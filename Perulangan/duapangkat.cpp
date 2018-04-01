#include <iostream>
using namespace std;

long int a;
int x;

int main(){
  cin >> a;
  x=1;
  while(x<a){
    x = x*2;
  }
  if(x==a){
    cout<< "ya\n";
  }else{
    cout<<"bukan\n";
  }
}
