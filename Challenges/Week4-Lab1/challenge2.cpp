#include <iostream>
using namespace std;
main(){
int salary,rem,months;
float advance;

cout << "Please Enter you salary ...";
cin>> salary;

advance= ((salary)*6)/2.0;

 if(advance>=50000){ 
 cout << "You can buy Laptop";
 }

 else{

  rem = 50000-advance;
  months=(rem*2)/salary;
  cout<<"Months Required = " <<months ;

 }

}