//Implement a C++ function that takes a person's income as an argument and 
//returns their tax bracket using if-else statements.
#include<bits/stdc++.h>
using namespace std;
int tax_Bracket(int income){
    if(income<=250000){ 
        return 0;  //notax
    }
    else if(income>250000 && income<=500000){
        return 1; // 5 % tax
    }
    else if(income>500000 && income<=750000){
        return 2;  // 10% tax
    }else{
        return 3;
    }
}
int main(){
 int income;
 cout<<"enter your income";
 cin>>income;
int result=tax_Bracket(income);
if(result==0){
    cout<<"no tax";
}
else if(result==1){
    cout<<"5 percent tax";
}
else if(result==2){
    cout<<"10 percent tax";
}
else{
    cout<<"taxes will be more then 10%";
}
    return 0;
}