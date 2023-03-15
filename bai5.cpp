#include <iostream>
#include <math.h>
  using namespace std;
  int main(){
    int tc;cin >> tc;
    while(tc--){
        int n;cin >> n;
        int i = 1;
        int res;
        while(i <= sqrt(n)){
            if(n%i == 0){
                res++;
                if(n != n/i)
                ++res;
            }
            ++i;
        }
        if(res % 2 !=0)
         cout << "YES" << endl;
         else 
         cout << "NO" << endl;
    }
    return 0;
  }