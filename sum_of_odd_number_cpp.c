#include<iostream>
using namespace std;
class even{
public:
    int check()
    {
       int x, y=0;
       cin>>x;
       for(int i=1; i<=x; i++)
        {
            if(i%2!=0)
            {
                y = y+i;
            }
        }
        return y;
       };
       int main()
       {
           even obj;
           cout<<obj.check();
           return 0;
       }
