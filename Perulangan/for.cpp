#include <iostream>
using namespace std;

int a,b,sum;

int main(){
  sum = 0;
  cin>>a;
  for(int i=0; i<a; i++){
    cin>>b;
    sum+=b;
  }
  cout<<sum<<"\n";
}
