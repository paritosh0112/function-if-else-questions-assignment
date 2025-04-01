#include<bits/stdc++.h>
using namespace std;
int checkCase(char ch){
  if(ch>='0' && ch<='9'){
    return 0;  //digit 
  }
  else if(ch>='a' && ch<='z'){
    return -1; //lowercase
  }
  else if(ch>='A' && ch<='Z'){
    return 1; //uppercase
  }else{
    return 2;
  }
   }


int main(){
  char ch;
  cout<<"enter the charcarter";
  cin>>ch;
  int result=checkCase(ch);
  if(result==0){
    cout<<"this is digit";
  }else if(result==-1){
     cout<<"this is lowercase";
  }else if(result==1){
     cout<<"this is uppercase";
  }else{
     cout<<"invalid input";
  }
    return 0;
}