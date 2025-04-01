#include <bits/stdc++.h>
using namespace std;
bool onlydigit(string ch){
    for(int i=0;i<=ch.length();i++){
      if(ch[i]<'0' || ch[i]>'9'){   //1-47 ....57-128  0=48 and 9=57
         return true;
       }
    }
    return false;
    
}
int main()
{
    string ch="123";
    // cout<<"enter the string ";
    // cin>>ch;
    bool digitornot=onlydigit(ch);
    if(digitornot){
        cout<<"it aplhanumeric";
    }
    else{
        cout<<"it contain only digit";
    }
    return 0;
}