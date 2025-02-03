
#include<iostream>
using namespace std;
bool isLeapYear(int year)
{
    if ((year%100!=0 && year % 4==0)|| (year % 400 ==0)){
        return true;

    }
    return false;
}
int main(){
int year;
cout<<"enter a year";
cin>>year;
if (isLeapYear(year)){
    cout<<year<<"is a leap year"<<endl;
}else {
cout<<year<<"is not a leap year"<<endl;
}
return 0;
}

