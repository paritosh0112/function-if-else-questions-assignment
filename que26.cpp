// Write a C++ function that takes a character as input and uses nested if-else statements 
// to determine if it is a vowel or consonant, considering both uppercase and lowercase letters.
#include<bits/stdc++.h>
using namespace std;
string vowel_Consonent(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
     || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
                        return "vowel";
    }
    else{
        return "consonent";
    }
}
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    cout<<"the charcter is  = " <<vowel_Consonent(ch);
    return 0;
}