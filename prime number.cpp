#include<iostream>
using namespace std;

class p{
 public:
     void prime()
     {
         int number;
         int check = 10;
         cin>>number;

         for(int i = 2; i < number; i++){
            if(number % i == 0){
                cout<<"Not a Prime Number"<<endl;
                break;
            }
         }
         if(check == 10){

           cout<<"The number is prime"<<endl;
         }
     }

 };
int main(){
    p o;
    o.prime();
   return 0;
   }
