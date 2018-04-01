#include <iostream>
using namespace std;

int main(){
  int m,n;
  cin >> m>>n;
  int matriks[m][n];
  for(int x=0;x<m;x++){
    for(int i=0;i<n;i++){
      cin>>matriks[x][i];
    }
  }
  for(int x=0;x<n;x++){
    for(int i=m-1;i>=0;i--){
      cout<<matriks[i][x];
      if(i>0){
        cout<<" ";
      }
    }
    cout<<"\n";
  }
}
