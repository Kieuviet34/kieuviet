#include <iostream>
#include <math.h>
  using namespace std;
  int main(){
    int tc;cin >> tc;
    while(tc--){
        int a,b; cin >> a >> b;
        int cnt;
        for (int i = a; i <= b;i++){
            if(sqrt(i) == floor(sqrt(i)))
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
  }