#include <iostream>
using namespace std;
class p{
  public:
      void prime(){
      int n; cin>>n; int count = 0;
      for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
      }
      if(count == 2){
        cout<<"prime"<<endl;
      }else{
      cout<<"Not prime"<<endl;
      }
        }
    };
int main()
{
    p obj; obj.prime();
    return 0;
}

