// q 10 Write a C++ function that takes a person's hourly wage and hours worked as arguments and 
// returns their total pay, including overtime pay for hours worked over 40, using if-else statements.


#include<bits/stdc++.h>
using namespace std;
int totalPay(int wage,int hourswork){
    int total;
    int realpay=40*wage;
    if(hourswork>40){
        int overtime=(hourswork-40)*1.5*wage;
        
        total=overtime+realpay;
        return total;
    }
    else{
        total=realpay;
        return total;
    }
}
int main(){
    int wage,hourswork;
    cout<<"enter the wage";
    cin>>wage;
    cout<<"enter the wage";
    cin>>hourswork;
    cout<<totalPay(wage,hourswork);
    return 0;
}