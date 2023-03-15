#include <iostream>
#include <math.h>
 int tong(int n){
    int cnt = 0;
    int i = 1;
    while(i < sqrt(n)){
        if(n % i == 0){
            cnt++;
        if(i != n/i){
            cnt++;
        }
    }
     ++i;
    }
    return cnt;
 }
  using namespace std;
  int main(){
    int tc;cin >> tc;
    while(tc--){
       int n; cin >> n;
       cout << tong(n) << endl;
    }
    return 0;
  }