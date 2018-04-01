#include <bits/stdc++.h>
using namespace std;

int d,n;
int temp;
int terbesar = 0;
int terkecil = 0;
int hitungjarak(int a, int b, int c,int e){
  return pow(abs(b-a),d) + pow(abs(e-c),d);
}


int main(){
  cin>>n>>d;
  int x[n];
  int y[n];
  for(int i = 0; i<n; i++){
    cin>>x[i]>>y[i];
  }
  for(int i = 0; i<n; i++){
    for(int o = i+1; o<n; o++){
        //cout<<i<<" "<<o<<"\n";
        //cout<<x[i]<<" "<<x[o]<<" "<<y[i]<<" "<<y[o]<<"\n";
      temp = hitungjarak(x[i],x[o],y[i],y[o]);
      //cout<<hitungjarak(x[i],x[o],y[i],y[o])<<"\n";
      if(i==0 && o==(i+1)){
          terkecil = temp;
      }
      if(temp > terbesar){
        terbesar = temp;
      }else if(temp<terkecil){
        terkecil = temp;
      }
    }
  }
  cout<<terkecil<<" "<<terbesar<<"\n";
}
