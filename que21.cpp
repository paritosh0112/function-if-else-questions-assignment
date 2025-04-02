// Implement a C++ function that takes a day of the month as an argument and 
//returns the corresponding zodiac sign using if-else statements.


#include<bits/stdc++.h>
using namespace std;
string zodiac_Sign(int day){
      if (day >= 1 && day <= 19) {
        return "Capricorn";
    } else if (day >= 20 && day <= 31) {
        return "Aquarius";
    } else {
        return "Invalid day";
    }
 }
int main(){
    int day;
    cout<<"Enter days ";
    cin>>day;
    cout<<" zodiac sign is = " << zodiac_Sign(day);
   
    return 0;
}