//Write a C++ function that takes a person's age as an argument and returns their life stage 
//(infant, toddler, child, adolescent, adult, senior) using if-else statements.
#include<bits/stdc++.h>
using namespace std;
string life_Stage(int age){
     if (age >= 0 && age <= 1) {
        return "Infant";
    } else if (age >= 2 && age <= 3) {
        return "Toddler";
    } else if (age >= 4 && age <= 12) {
        return "Child";
    } else if (age >= 13 && age <= 19) {
        return "Adolescent";
    } else if (age >= 20 && age <= 64) {
        return "Adult";
    } else if (age >= 65) {
        return "Senior";
    } else {
        return "Invalid age";
    }
}
int main(){
    int age;
    cout<<"enter the age";
    cin>>age;
    cout<< "the life stage of a person  "<<life_Stage(age);
    return 0;

}