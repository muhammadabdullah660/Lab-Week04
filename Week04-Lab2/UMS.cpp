#include <iostream>
using namespace std;
main()
{
     char option;
     string stuName1 = "", stuName2 = "", pref1 = "", pref2 = "", pref3 = "", pref4 = "", pref5 = "", pref6 = "", stuName3 = "", stuName4 = "", pref7 = "", pref8 = "", pref9 = "", pref10 = "", pref11 = "", pref12 = "";
     float ecat = 0.0, matric = 0.0, inter = 0.0, ecat1 = 0.0, matric1 = 0.0, inter1 = 0.0, ecat2 = 0.0, matric2 = 0.0, inter2 = 0.0, ecat3 = 0.0, matric3 = 0.0, inter3 = 0.0;
     float ecatPerct = 0.0, matricPerct = 0.0, interPerct = 0.0, total = 0.0, ecatPerct1 = 0.0, matricPerct1 = 0.0, interPerct1 = 0.0, total1 = 0.0, ecatPerct2 = 0.0, matricPerct2 = 0.0, interPerct2 = 0.0, total2 = 0.0, ecatPerct3 = 0.0, matricPerct3 = 0.0, interPerct3 = 0.0, total3 = 0.0;

     cout << "************************************************************" << endl;
     cout << "*\t University Admission Management System \t   *" << endl;
     cout << "************************************************************" << endl
          << endl
          << endl;

     cout << "Main Menu  >" << endl;
     cout << "---------------------" << endl;
     cout << "Select one of the following options..." << endl;
     cout << "1- Add New Student Record" << endl;
     cout << "2- View all Records" << endl;
     cout << "3- Print the Record in Merit Order" << endl;
     cout << "4- Generate Merit List" << endl;
     cout << "5- Program Seat Management" << endl;
     cout << "6- Exit" << endl;
     cout << "Your Option..";
     cin >> option;
     if (option < '5')
     {
          // Show Records

          if (option == '2')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Show All Students" << endl;
               cout << "---------------------" << endl;

               cout << "Name"
                    << "\t"
                    << "Matric"
                    << "\t"
                    << "Inter"
                    << "\t"
                    << "ECAT"
                    << "\t"
                    << "Aggregate"
                    << "\t"
                    << "1st"
                    << "\t"
                    << "2nd"
                    << "\t"
                    << "3rd" << endl;

               cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
               cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6;
               cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
               cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // FOR FIRST STUDENT
          if (option == '1')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Add Student" << endl;
               cout << "---------------------" << endl;

               cout << "Enter your Name :- ";
               cin >> stuName1;
               cout << "Enter Obtained Inter marks :- ";
               cin >> inter;
               cout << "Enter Obtained Matric marks :- ";
               cin >> matric;
               cout << "Enter Obtained ECAT marks :- ";
               cin >> ecat;
               cout << "Enter your 1st Preference :- ";
               cin >> pref1;
               cout << "Enter your 2nd Preference :- ";
               cin >> pref2;
               cout << "Enter your 3rd Preference :- ";
               cin >> pref3;

               ecatPerct = ecat / 400.0 * 30;
               matricPerct = matric / 1100.0 * 25;
               interPerct = inter / 1100.0 * 45;
               total = ecatPerct + matricPerct + interPerct;

               system("CLS");

               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;

               cout << "Main Menu  >" << endl;
               cout << "---------------------" << endl;
               cout << "Select one of the following options..." << endl;
               cout << "1- Add New Student Record" << endl;
               cout << "2- View all Records" << endl;
               cout << "3- Print the Record in Merit Order" << endl;
               cout << "4- Generate Merit List" << endl;
               cout << "5- Program Seat Management" << endl;
               cout << "6- Exit" << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // FOR SECOND STUDENT

          if (option == '1')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Add Student" << endl;
               cout << "---------------------" << endl;

               cout << "Enter your Name :- ";
               cin >> stuName2;
               cout << "Enter Obtained Inter marks :- ";
               cin >> inter1;
               cout << "Enter Obtained Matric marks :- ";
               cin >> matric1;
               cout << "Enter Obtained ECAT marks :- ";
               cin >> ecat1;
               cout << "Enter your 1st Preference :- ";
               cin >> pref4;
               cout << "Enter your 2nd Preference :- ";
               cin >> pref5;
               cout << "Enter your 3rd Preference :- ";
               cin >> pref6;

               ecatPerct1 = ecat1 / 400.0 * 30;
               matricPerct1 = matric1 / 1100.0 * 25;
               interPerct1 = inter1 / 1100.0 * 45;
               total1 = ecatPerct1 + matricPerct1 + interPerct1;

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;

               cout << "Main Menu  >" << endl;
               cout << "---------------------" << endl;
               cout << "Select one of the following options..." << endl;
               cout << "1- Add New Student Record" << endl;
               cout << "2- View all Records" << endl;
               cout << "3- Print the Record in Merit Order" << endl;
               cout << "4- Generate Merit List" << endl;
               cout << "5- Program Seat Management" << endl;
               cout << "6- Exit" << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // FOR THIRD STUDENT

          if (option == '1')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Add Student" << endl;
               cout << "---------------------" << endl;

               cout << "Enter your Name :- ";
               cin >> stuName3;
               cout << "Enter Obtained Inter marks :- ";
               cin >> inter2;
               cout << "Enter Obtained Matric marks :- ";
               cin >> matric2;
               cout << "Enter Obtained ECAT marks :- ";
               cin >> ecat2;
               cout << "Enter your 1st Preference :- ";
               cin >> pref7;
               cout << "Enter your 2nd Preference :- ";
               cin >> pref8;
               cout << "Enter your 3rd Preference :- ";
               cin >> pref9;

               ecatPerct2 = ecat2 / 400.0 * 30;
               matricPerct2 = matric2 / 1100.0 * 25;
               interPerct2 = inter2 / 1100.0 * 45;
               total2 = ecatPerct2 + matricPerct2 + interPerct2;

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;

               cout << "Main Menu  >" << endl;
               cout << "---------------------" << endl;
               cout << "Select one of the following options..." << endl;
               cout << "1- Add New Student Record" << endl;
               cout << "2- View all Records" << endl;
               cout << "3- Print the Record in Merit Order" << endl;
               cout << "4- Generate Merit List" << endl;
               cout << "5- Program Seat Management" << endl;
               cout << "6- Exit" << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // FOR FORTH STUDENT

          if (option == '1')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Add Student" << endl;
               cout << "---------------------" << endl;

               cout << "Enter your Name :- ";
               cin >> stuName4;
               cout << "Enter Obtained Inter marks :- ";
               cin >> inter3;
               cout << "Enter Obtained Matric marks :- ";
               cin >> matric3;
               cout << "Enter Obtained ECAT marks :- ";
               cin >> ecat3;
               cout << "Enter your 1st Preference :- ";
               cin >> pref10;
               cout << "Enter your 2nd Preference :- ";
               cin >> pref11;
               cout << "Enter your 3rd Preference :- ";
               cin >> pref12;

               ecatPerct3 = ecat3 / 400.0 * 30;
               matricPerct3 = matric3 / 1100.0 * 25;
               interPerct3 = inter3 / 1100.0 * 45;
               total3 = ecatPerct3 + matricPerct3 + interPerct3;

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;

               cout << "Main Menu  >" << endl;
               cout << "---------------------" << endl;
               cout << "Select one of the following options..." << endl;
               cout << "1- Add New Student Record" << endl;
               cout << "2- View all Records" << endl;
               cout << "3- Print the Record in Merit Order" << endl;
               cout << "4- Generate Merit List" << endl;
               cout << "5- Program Seat Management" << endl;
               cout << "6- Exit" << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // Show Records

          if (option == '2')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Show All Students" << endl;
               cout << "---------------------" << endl;

               cout << "Name"
                    << "\t"
                    << "Matric"
                    << "\t"
                    << "Inter"
                    << "\t"
                    << "ECAT"
                    << "\t"
                    << "Aggregate"
                    << "\t"
                    << "1st"
                    << "\t"
                    << "2nd"
                    << "\t"
                    << "3rd" << endl;

               cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
               cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6;
               cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
               cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;

               cout << "Your Option..";
               cin >> option;
          }

          // Print the records in merit order

          if (option == '3')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Student Merit List " << endl;
               cout << "---------------------" << endl;

               // 1st position
               if (total > total1 && total > total2 && total > total3)
               {
                    cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                    if (total1 > total2 && total1 > total3)
                    {
                         cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         if (total2 > total3)
                         {
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         }
                    }
                    else if (total2 > total1 && total2 > total3)
                    {
                         cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         if (total1 > total3)
                         {
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         }
                    }
               }
               // 2nd position
               if (total1 > total && total1 > total2 && total1 > total3)
               {
                    cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                    if (total > total2 && total > total3)
                    {
                         cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                         if (total2 > total3)
                         {
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         }
                    }
                    else if (total2 > total1 && total2 > total3)
                    {
                         cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         if (total1 > total3)
                         {
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         }
                    }
               }
               // 3rd position
               if (total2 > total1 && total2 > total && total2 > total3)
               {
                    cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                    if (total1 > total2 && total1 > total3)
                    {
                         cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         if (total > total3)
                         {
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                         }
                    }
                    else if (total3 > total1 && total3 > total)
                    {
                         cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         if (total1 > total3)
                         {
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                         }
                         else
                         {
                              cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         }
                    }
               }
               // 1st position
               if (total3 > total1 && total3 > total2 && total3 > total)
               {
                    cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << total3 << "\t" << pref10 << "\t" << pref11 << "\t" << pref12 << endl;
                    if (total1 > total2 && total1 > total)
                    {
                         cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         if (total2 > total)
                         {
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                         }
                         else
                         {
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                              cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         }
                    }
                    else if (total2 > total1 && total2 > total)
                    {
                         cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << total2 << "\t" << pref7 << "\t" << pref8 << "\t" << pref9 << endl;
                         if (total1 > total)
                         {
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                         }
                         else
                         {
                              cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
                              cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << total1 << "\t" << pref4 << "\t" << pref5 << "\t" << pref6 << endl;
                         }
                    }
               }
               cout << "Your Option..";
               cin >> option;
          }
          // Generate Merit List

          if (option == '4')
          {

               system("CLS");
               cout << "************************************************************" << endl;
               cout << "*\t University Admission Management System \t   *" << endl;
               cout << "************************************************************" << endl
                    << endl
                    << endl;
               cout << "Main Menu  > Student Merit List " << endl;
               cout << "---------------------" << endl;

               if (total > total1)
               {
                    cout << stuName1 << "\t"
                         << "Got Admission in " << pref1 << " with aggregate " << total << endl;
                    cout << stuName2 << "\t"
                         << "Got Admission in " << pref4 << " with aggregate " << total1 << endl;
               }
               else
               {
                    cout << stuName2 << "\t"
                         << "Got Admission in " << pref4 << " with aggregate " << total1 << endl;
                    cout << stuName1 << "\t"
                         << "Got Admission in " << pref1 << " with aggregate " << total << endl;
               }
          }
     }
}