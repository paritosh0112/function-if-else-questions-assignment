#include<bits/stdc++.h>
using namespace std;
int checkTriangle(int a,int b,int c){
if(a==b && b==c){
   return 0;
   }
  else if(a==b||b==c||a==c) {
    return 1;
  }else{
    return -1;
  }
}
int main(){
   int a,b,c;
   cout<<"enter the 3 sides";
   cin>>a;
   cin>>b;
   cin>>c;
   int result=checkTriangle(a,b,c);
   if(result==0){
    cout<<"equilateral triangle";
   }else if(result==1){
    cout<<"isoceles triangle";
   }else{
    cout<<"scalene triangle";
   }


    return 0;
}