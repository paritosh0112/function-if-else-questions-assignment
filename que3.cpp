//Write a C++ function that takes a month as an argument and returns whether it has 30 days, 31 days, or 28/29 days using if-else statements.
#include <iostream>
using namespace std;

int daysInMonth(int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } 
    else {
        return 28;
    }
}

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;
    
    int days = daysInMonth(month);
    
    if (days ==31) {
        cout << "Month has 31 days";
    } 
    else if (days==30){
       cout << "Month has 30 days";
    }
    else{
          cout << "Month has 28 days";
    }
    
    return 0;
}

