#include <iostream>
#include <math.h>
  using namespace std;
  int main(){
    int tc;cin >> tc;
    while(tc--){
        int n; cin >> n;
        int root = sqrt(n);
        if (n < 0) cout << "false" << " ";
          if(root * root == n){
            cout << "YES" << endl;
          } else{
            cout << "NO" << endl;
          }
    }
    return 0;
  }