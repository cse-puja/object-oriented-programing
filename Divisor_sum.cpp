#include <bits/stdc++.h>
using namespace std;
class p{
 public:
     void divisor(){
     int n; cin>>n; int sum = 0;
     for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum = sum + i + n/i;
        }

       }
       cout<<sum<<endl;
    }
};
int main(){
p obj; obj.divisor();
 return 0;
 }

