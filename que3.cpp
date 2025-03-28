#include<bits/stdc++.h>
using namespace std;
string temperature(int temp){
  if(temp<0){
    return "cold";
  }
  else if(temp>0 && temp<100){
     return "warm";
  }
    else{
        return "hot";
    }
}


int main(){
   int temp;
   cout<<"enter the temperature ";
   cin>>temp;
   string result=temperature(temp);
  if(result=="cold"){
    cout<<"temp is cold";
  }else if(result=="warm"){
    cout<<"temp is warm";
  } else{
    cout<<"temp is Hot";
  }
    return 0;
}