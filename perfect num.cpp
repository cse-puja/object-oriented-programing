#include <bits/stdc++.h>
using namespace std;
class p{
 public:
     void divisor(){
     int n; cin>>n; int sum = 1;
     for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum = sum + i + n/i;
        }

       }
       if(sum == n){
       cout<<n<<" is perfect number"<<endl;
       }else{
       cout<<n<<" is not perfect"<<endl;
       }
    }
};
int main(){
p obj; obj.divisor();
 return 0;
 }


