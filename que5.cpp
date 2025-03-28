#include<bits/stdc++.h>
using namespace std;
void checknum(float floatNum){
    if(floatNum>0){
        cout<<"positive";
    }
    else if(floatNum<0){
        cout<<"negative";
    }else{
        cout<<"zero";
    }
}
int main()
{
    float floatNum;
    cout<<"enter the floting point number ";
    cin>>floatNum;
    checknum(floatNum);
    return 0;
}