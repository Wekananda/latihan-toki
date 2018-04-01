//Wrong 1 + TLE 1
#include <iostream>
//Mencari modus untuk array tak terurut
using namespace std;

int main(){
  int a,number,count;
  int modus = 0;
  int modus1 = 0;
  int modus2=0;
  cin>> a;
  int w[a];
  for(int x=0; x<a; x++){
    cin>>w[x];
  }
  int nilai = 0;
  for(int i=0; i<a; i++){
    nilai = 0;
  if(w[i]==modus && i!=0){//biar kalau array pertama 0 adalah 0 nilainya menjadi tidak terekesekusi
    continue;
  }
  for(int x=0; x<a; x++){
      if(w[x] == w[i]){
        nilai++;
      }
  }

  if(nilai>=modus1){
    modus1=nilai;
    modus = w[i];
  }
}

cout << modus <<"\n";
}
