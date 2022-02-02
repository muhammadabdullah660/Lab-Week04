#include <iostream>
using namespace std;
main(){
string pass,inputPass;

cout << "Please Enter the password...";
cin>> inputPass;

pass="Pass@12345";

if (inputPass==pass){
cout<<"Wow ! You have cracked the code";
 } 
else{
cout<<"It is not that simple..Try Again!!";
 }
}