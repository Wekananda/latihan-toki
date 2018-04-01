#include <iostream>
using namespace std;
int main(){
  long int b;
  cin>>b;
  if(b >= 0 && b<10){
    cout <<"satuan\n";
  }else if(b>=10 && b<100){
    cout <<"puluhan\n";
  }else if(b>=100 && b<1000){
    cout <<"ratusan\n";
  }else if(b>=1000 && b<10000){
      cout <<"ribuan\n";
  }
  else if(b>=10000&& b<100000){
    cout<<"puluhribuan\n";
  }
}
