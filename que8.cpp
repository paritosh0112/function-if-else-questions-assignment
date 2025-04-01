#include<bits/stdc++.h>
using namespace std;
int calculateBMICategory(float weight, float height) {
    float bmi = weight / (height * height);
    
    if (bmi < 18.5) {
        return 1; //underweight
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return -1; //Normaloverweight
    } else if (bmi >= 25 && bmi < 29.9) {
        return 0; //overweight
    } else {
        return -5;//obese
    }
}
int main(){
    float weight,height;
    cout<<"enter the parameter weight and height =  ";
    cin>>weight;
    cin>>height;
    int result=calculateBMICategory(weight,height);
    if(result==1){
        cout<<"underweight";
    }else if(result==-1){
        cout<<"Normal weight";
        
    }
    else if(result==0){
        cout<<"overweight";
    }else {
        cout<<"obese";
    }
    return 0;
}