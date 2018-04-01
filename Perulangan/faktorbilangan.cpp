#include <iostream>
using namespace std;
int main(){
  long int bil;
  cin >> bil;
  for(int x = bil; x>0; x--){
    if(bil % x == 0){
      cout<<x<<"\n";
    }
  }
}
