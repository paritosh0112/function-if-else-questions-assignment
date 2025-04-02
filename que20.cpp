//Implement a C++ function that takes a student's attendance percentage as an argument and 
//returns whether they are eligible for exams using if-else statements.
#include<bits/stdc++.h>
using namespace std;
bool eligiblefor_Exams(int attendance){
     if(attendance>75){
        return true;
     }
     else{
        return false;
     }
 }
int main(){
    int attendance;
    cout<<"Enter attendance  ";
    cin>>attendance;
    bool result =eligiblefor_Exams(attendance);
    if(result==true){
        cout<<"students are eligible for exams";
    }
    else{
        cout<<"students are not allowed by giving the exams";
    }
    return 0;
}