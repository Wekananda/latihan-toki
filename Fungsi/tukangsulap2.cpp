#include <iostream>
using namespace std;

int main(){
int n,q,temp;
int i,x,y;
int w,z;
char a,b;

  cin>>n;
  int angka[2][n];
for(i=0; i<2; i++){
  for(x=0; x<n; x++){
      cin>> angka[i][x];
  }
}

  cin>>q;
  for(i =0; i<q; i++){
    cin>>a>>x>>b>>y;
    x-=1;
    y-=1;
    if(a=='A'){
      w=0;
    }else if(a=='B'){
      w=1;
    }
    if(b=='A'){
      z=0;
    }else if(b=='B'){
      z=1;
    }


    temp=angka[w][x];
    angka[w][x] = angka[z][y];
    angka[z][y] = temp;

  }
  for(i=0; i<2; i++){
    for(x=0; x<n; x++){
        cout<< angka[i][x];
        if(x!=(n-1)){
          cout<<" ";
        }
    }

    cout<<"\n";
  }
}
