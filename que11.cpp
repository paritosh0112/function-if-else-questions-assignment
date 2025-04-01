//Develop a C++ function that takes a character as an argument and returns its ASCII 
//value category (digit, uppercase letter, lowercase letter, special character) using if-else statements.
#include<bits/stdc++.h>
using namespace std;
string ascii_valueCategory(char ch){
     if (ch >= '0' && ch <= '9') {
        return "Digit";
    } else if (ch >= 'A' && ch <= 'Z') {
        return "Uppercase Letter";
    } else if (ch >= 'a' && ch <= 'z') {
        return "Lowercase Letter";
    } else {
        return "Special Character";
    }
}
int main (){
    char ch;
    cout<<"enter the charcter";
    cin>>ch;
    cout<<"the value belongs to " <<ascii_valueCategory(ch);
    return 0;
}