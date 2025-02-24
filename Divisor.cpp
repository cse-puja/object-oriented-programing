#include <bits/stdc++.h>
using namespace std;
class p{
 public:
     void divisor(){
     int n; cin>>n;
     for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout<<i<<" "<<n/i<<" ";
        }

       }
    }
};
int main(){
p obj; obj.divisor();
 return 0;
 }
