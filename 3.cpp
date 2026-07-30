#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
int months;

while (t--) {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if(Z<=Y){
        cout<<"-1";
    }
    else{
         int months = (X + (Z - Y) - 1) / (Z - Y);
            cout << months;
    }
  
}
}