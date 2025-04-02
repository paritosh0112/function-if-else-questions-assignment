//Implement a C++ function that takes the number of hours a car is parked as an
// argument and returns the parking fee based on hourly rates using if-else statements.
#include<bits/stdc++.h>
using namespace std;
int _parking_Fee(int hours){
       if(hours>5){
        return 1000;
       }else{
        return 10;
       }
}
int main(){
    int hours;
    cout<<"enter the number of hours  =  ";
    cin>>hours;
     cout<<"the fee of parking as per conditions  "<<_parking_Fee(hours);
    return 0;
}