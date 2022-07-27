#include <iostream>
using namespace std;
main(){
int amt;
float discAmt;
cout << "Please Enter the Amount...";
cin>> amt;

if (amt<=5000){
discAmt = 5000.0*0.05;
cout<<"Total Payable Amount is = "<<discAmt;
 } 
else if (amt>5000){
discAmt = 5000.0*0.1;
cout<<"Total Payable Amount is = "<<discAmt;;
 }
}