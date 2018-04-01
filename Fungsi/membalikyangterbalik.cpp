#include <iostream>
using namespace std;

long int reverse(long int x) {
    long int temp = x;
    long int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp%10);
        temp = temp/10;
       // cout<<ret<<" "<<temp<<"\n";
    }

    return ret;
}
int main(){
  long int a,b,c;
    cin>>a>>b;
    c=reverse(a)+reverse(b);
    cout<<reverse(c)<<"\n";
}
