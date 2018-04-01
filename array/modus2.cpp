//Ternyata yang simple yang paling efisien krn kompleksitas O(N)  brppun inputnya hanya melakukan 2000 operasi + n
#include <iostream>
using namespace std;

int main(){
  int angka[1001];
  int a,b,modus;
  int count = 0;
  cin>>a;
   for(int x=1; x<=1000; x++){
      angka[x] = 0;
  }
  for(int x=0; x<a; x++){
    cin>> b;
    angka[b]++;
  }

  for(int x=1; x<=1000; x++){
      if(angka[x]>=count){
        //cout<<angka[x]<<" "<< count<<"\n";
        count = angka[x];
        modus = x;
      }
  }
  cout << modus<<"\n";
}
