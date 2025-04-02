#include<bits/stdc++.h>
using namespace std;
string calculateBonus(int years){
      if (years>=10) {
        return "10 percent bonus";
    } else if (years>=5) {
        return "5 percent bonus";
    } else {
        return "no Bonus given";
    }
 }
int main(){
    int years;
    cout<<"Enter number of years worked ";
    cin>>years;
    cout<<"bonus will be given =" << calculateBonus(years);
   
    return 0;
}