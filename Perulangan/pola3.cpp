#include <iostream>
using namespace std;
int main(){
  int a,b,u,i,z,angka;
  angka = 0;
  u=0;
  cin>>a;
  for(int x=0; x<a; x++){
      for(z=0; z<=x; z++){
        //cout<<"DB: "<<z<<" "<<u<<" "<<x+u<<"\n"
        if(angka == 10){
          angka = 0;
        }
        cout<<angka;
        angka++;
        }
        cout << "\n";
      }
      //cout<<"u: "<<u;

  }
