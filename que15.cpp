//Write a C++ function that takes the number of days a book is overdue and
// returns the fine using if-else statements.
#include<bits/stdc++.h>
using namespace std;
int fine_Books(int days){
    if(days<=10){
        return 0;
    }
    else{
        return 100;
    }
}
int main(){
    int days;
    cout<<"number of days";
    cin>>days;
    int fine=fine_Books(days);
    if(fine==0){
        cout<<"No fine";
    }else{
        cout<<"100 ruppes fine After 10 days of issue of book";
    }
    return 0;
}