#include <iostream>
#include <vector>

using namespace std;

int n,x,y,q;
int o,p;//pengulangan
int temp;
char a,b;
vector <int> angka1;
vector <int> angka2;

void tukar(char p,char q,int w,int s){
  //cout<<p<<" "<<q<<" "<<a<<" "<<b<<"\n";
  int temp;
  w-=1;
  s-=1;

  //P-W -> QS
  if(p=='A' && q=='B'){
      temp = angka1[w];
      angka1[w] = angka2[s];
      angka2[s] = temp;
  }else if (p=='B' && q=='A'){
    temp = angka2[w];
    angka2[w] = angka1[s];
    angka1[w] = temp;
  }else if(p=='A' && q=='A'){
    temp = angka1[w];
    angka1[w] = angka1[s];
    angka1[w] = temp;
  }else if(p=='B' && q=='B'){
    temp = angka2[w];
    angka2[w] = angka2[s];
    angka2[w] = temp;
  }
}

int main(){
  cin>>n;
    for(p=0;p<n;p++){
      cin>>temp;
      angka1.push_back(temp);
    }
    for(p=0;p<n;p++){
      cin>>temp;
      angka2.push_back(temp);
    }
  cin>>q;
  for(o=0;o<q;o++){
    cin>>a>>x>>b>>y;
    //cin>>x>>a>>y>>b;
    tukar(a,b,x,y);
  }
  for(p=0;p<n;p++){
      cout<<angka1[p];
      //cout<<p<<" "<<(n-2)<<"\n";
      if(p!=(n-1)){
          cout<<" ";
      }
    }
    cout<<"\n";
     for(p=0;p<n;p++){
      cout<<angka2[p];
      if(p!=(n-1)){
          cout<<" ";
      }
    }
      cout<<"\n";
}
