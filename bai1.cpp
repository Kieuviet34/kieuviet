#include <iostream>
 using namespace std;
 int main(){
    int tc;cin >> tc;
    while(tc--){
    int n;
    cin >> n;
    int rev =0,rem;
    //check reversible number, if false cout NO
    while(n != 0){
      rem = n % 10;
      rev = rev * 10 + rem;
      n /= 10;
    }
     if(n == rev){
        cout << "YES" << endl;
     }
     else{
        cout << "NO" << endl;
     }
    }
    return 0;
 }