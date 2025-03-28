#include<bits/stdc++.h>
using namespace std;
int temperature(int temp){
  if(temp<0){
    return -1;
  }
  else if(temp>0 && temp<100){
     return 0;
  }
    else{
        return 1;
    }
}


int main(){
   int temp;
   cout<<"enter the temperature ";
   cin>>temp;
   int result=temperature(temp);
  if(result==-1){
    cout<<"temp is cold";
  }else if(result==0){
    cout<<"temp is warm";
  } else{
    cout<<"temp is Hot";
  }
    return 0;
}