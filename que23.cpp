//Develop a C++ function that takes a temperature in Celsius as an argument and returns the state
// of water (solid, liquid, gas) at that temperature using if-else statements.
#include<bits/stdc++.h>
using namespace std;
 string stateof_Water(int temp){
    if(temp<0){
        return "solid";
    }
    else if(temp>=0 && temp<100){
        return "liquid";
    }
    else{
        return "gas";
    }
}
int main(){
    int temp;
    cout<<"enter the temperature";
    cin>>temp;
    cout<< "state of water is  =  "<<stateof_Water(temp);
    return 0;
}