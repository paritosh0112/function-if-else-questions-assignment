#include<bits/stdc++.h>
using namespace std;
int checkPriority(int a,int b ){
  if(a==b){
    return 1;
  }
  else if(a>b){
     return 0;
  }else{
    return -1;
  }
   }


int main(){
   int a,b;
   cout<<"enter the value of and b ";
   cin>>a>>b;
   int result=checkPriority(a,b);
  if(result==1){
    cout<<"both numbers are equal";
  } else if(a>b){
    cout<<" A greater then B";
  }else{
     cout<<"not condition matched";
  }
    return 0;
}