#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<num;i++){
     if(num%i==0){
         return false;
     }
    }

    return true;
}


int main(){
   int num;
   cout<<"enter the number ";
   cin>>num;
   if(isprime (num)){
    cout<<"Num is prime";
   }
   else{
    cout<<"Num is not prime";
   }
    return 0;
}