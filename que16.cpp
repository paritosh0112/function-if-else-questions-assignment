//Create a C++ function that takes a student's score as an argument and 
//returns whether the score is in the top 10% using logical operators.
#include<bits/stdc++.h>
using namespace std;
bool istop_10Precent(int score){
         if(score>90 && score<=100){
            return true;
         }
         else{
             return false;
         }
}
int main(){
    int score;
    cout<<"enter your score  ";
    cin>>score;
    bool result=istop_10Precent(score);
    if(result==true){
        cout<<" you in top 10 %";
    }
    else{
        cout<<"you are not in top percentage";
    }
    return 0;
}