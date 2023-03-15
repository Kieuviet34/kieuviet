#include <iostream>
#include <vector>
 using namespace std;
  int main(){
    int n; cin >> n;
    vector<int> a(n);
   //nhap mang luu gia tri
    for (int i = 0; i < n; i++) cin >> a[i];
      int cnt  = 0;
    for(int i= 0; i < n-1;i++){
        vector<int> freq(10,0);
        int num = a[i];
         while(num > 0){
            freq[num % 10]++;
            num /= 10;
         }
        for (int j = i+1;j <= n;j++){
             bool so_dep = true;
             int num  = a[j];
             while(num > 0){
             if(freq[num % 10] == 0){
                so_dep = false;
                break;
             }
             num /= 10;
        }
        if(so_dep){
            cnt++;
        }
      } 
    }
    cout << cnt << endl;
    return 0;
  }