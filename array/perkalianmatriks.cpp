#include <iostream>
using namespace std;

int main(){
int n,p,m,x,i;

int c=0;
cin>>n>>m>>p;
int matriksa[n][m];
int matriksb[m][p];
int matriksc[n][p];

for(x=0; x<n; x++){
  for(i=0; i<m; i++){
    cin>>matriksa[x][i];
  }
}


for(x=0; x<m; x++){
  for(i=0; i<p; i++){
    cin>>matriksb[x][i];
  }
}

//Reset nilai array sebelum dilakukan operasi
for(x=0; x<n; x++){
  for(i=0; i<p; i++){
    matriksc[x][i] = 0;
  }
}

for(x=0; x<p; x++){
  for(i=0; i<m; i++){
    matriksc[c][x] +=matriksa[c][i] * matriksb[i][x];
  }
  if(x==(p-1) && c<(n-1)){
    c++;
    x=-1;
  }
}

for(x=0; x<n; x++){
  for(i=0; i<p; i++){
    cout<<matriksc[x][i];
    if(i<(p-1)){
        cout<<" ";
    }
  }
  cout<<"\n";
}
}
