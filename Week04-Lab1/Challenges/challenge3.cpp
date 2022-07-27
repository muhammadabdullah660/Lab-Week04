#include <iostream>
using namespace std;
main(){
float num1,num2,result;
char op;

cout << "Please Enter 1st Number...";
cin>> num1;

cout << "Please Enter Operators (*,/,-,+)...";
cin>> op;

cout << "Please Enter 2nd Number...";
cin>> num2;

if (op=='+'){
result = num1-num2;
cout<<"Result = "<<result;
 } 
if (op=='-'){
result = num1+num2;
cout<<"Result = "<<result;
 } 
if (op=='/'){
result = num1*num2;
cout<<"Result = "<<result;
 } 
if (op=='*'){
result = num1/num2;
cout<<"Result = "<<result;
 } 
}