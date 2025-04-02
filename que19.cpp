//Write a C++ function that takes a temperature in Fahrenheit as an argument and returns its
// equivalent in Celsius, with additional messages if it is freezing or boiling using if-else statements.
#include<bits/stdc++.h>
using namespace std;
int temperaturein_celsius(int tempF){
    int celcius = (tempF - 32) * 5 / 9;
   if(celcius<=0){
        return -1;
     }
     else if(celcius>100){
                return 1;
      }
      else{
        return 0;
        }
        }
int main (){
    int tempF;
    cout<<"enter the temperature in fahrenheit";
    cin>>tempF;
   int finalResult= temperaturein_celsius(tempF);
   if(finalResult==-1){
    cout<<"It is freezing";
   }
   else if(finalResult==1){
    cout<<"It is boiling";
   }
   else{
    cout<<"Normal temperature";
   }
    return 0;
}