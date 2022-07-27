#include <iostream>
#include <conio.h>
using namespace std;
// All Functions Prototypes
void header();
int mainMenu();
void viewStu(string stuName1, string pref1, string pref2, string pref3, float ecat, float matric, float inter, float total);
float aggregate(float ecat, float matric, float inter);
void sorting(float agg, float agg1, float agg2, float agg3, string stuName1, string stuName2, string stuName3, string stuName4, float matric, float matric1, float matric2, float matric3, float ecat, float ecat1, float ecat2, float ecat3, float inter, float inter1, float inter2, float inter3);
// Main Function
main()
{ // Variable Declaration
    int option = 0, check = 0;
    string stuName1 = "", stuName2 = "", pref1 = "", pref2 = "", pref3 = "", pref4 = "", pref5 = "", pref6 = "", stuName3 = "", stuName4 = "", pref7 = "", pref8 = "", pref9 = "", pref10 = "", pref11 = "", pref12 = "";
    float ecat = 0.0, matric = 0.0, inter = 0.0, ecat1 = 0.0, matric1 = 0.0, inter1 = 0.0, ecat2 = 0.0, matric2 = 0.0, inter2 = 0.0, ecat3 = 0.0, matric3 = 0.0, inter3 = 0.0;
    float ecatPerct = 0.0, matricPerct = 0.0, interPerct = 0.0, total = 0.0, ecatPerct1 = 0.0, matricPerct1 = 0.0, interPerct1 = 0.0, total1 = 0.0, ecatPerct2 = 0.0, matricPerct2 = 0.0, interPerct2 = 0.0, total2 = 0.0, ecatPerct3 = 0.0, matricPerct3 = 0.0, interPerct3 = 0.0, total3 = 0.0;
    float agg = 0.0, agg1 = 0.0, agg2 = 0.0, agg3 = 0.0;
    while (option < 5)
    {
        header();
        option = mainMenu();

        // SHOW NO STUDENTS
        if (option == 2)
        {
            header();
            viewStu(stuName1, pref1, pref2, pref3, ecat, matric, inter, agg);
            getch();
            header();
            option = mainMenu();
        }
        // ADD FIRST STUDENT
        else if (option == 1)
        {
            check++;
            if (check == 1)
            {
                header();
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
                getch();
                agg = aggregate(ecat, matric, inter);
                header();
                option = mainMenu();
            }
            if (check == 2)
            {
                header();
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
                getch();
                agg1 = aggregate(ecat1, matric1, inter1);
                header();
                option = mainMenu();
            }
            if (check == 3)
            {
                header();
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
                getch();
                agg2 = aggregate(ecat2, matric2, inter2);
                header();
                option = mainMenu();
            }
            if (check == 4)
            {
                header();
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
                getch();
                agg3 = aggregate(ecat3, matric3, inter3);
                header();
                option = mainMenu();
            }
        }
        else if (option == 2)
        {
            header();
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
            viewStu(stuName1, pref1, pref2, pref3, ecat, matric, inter, agg);
            viewStu(stuName2, pref4, pref5, pref6, ecat1, matric1, inter1, agg1);
            viewStu(stuName3, pref7, pref8, pref9, ecat2, matric2, inter2, agg2);
            viewStu(stuName4, pref10, pref11, pref12, ecat3, matric3, inter3, agg3);
            getch();
            header();
            option = mainMenu();
        }
        else if (option == 3)
        {
            header();
            cout << "Main Menu  > Generate Merit List" << endl;
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
                 << endl;
            sorting(agg, agg1, agg2, agg3, stuName1, stuName2, stuName3, stuName4, matric, matric1, matric2, matric3, ecat, ecat1, ecat2, ecat3, inter, inter1, inter2, inter3);
            getch();
            header();
            option = mainMenu();
        }
        else
        {
            cout << "Thanks for using UMS";
        }
    }
}
// END OF MAIN FUCTION
void header()
{
    system("CLS");
    cout << "************************************************************" << endl;
    cout << "*\t University Admission Management System \t   *" << endl;
    cout << "************************************************************" << endl
         << endl
         << endl;
}
int mainMenu()
{
    int option;
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
    return option;
}
void viewStu(string stuName1, string pref1, string pref2, string pref3, float ecat, float matric, float inter, float total)
{
    cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << total << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
}
float aggregate(float ecat, float matric, float inter)
{
    float ecatPerct = ecat / 400.0 * 30;
    float matricPerct = matric / 1100.0 * 25;
    float interPerct = inter / 1100.0 * 45;
    float agg = ecatPerct + matricPerct + interPerct;
    return agg;
}
void sorting(float agg, float agg1, float agg2, float agg3, string stuName1, string stuName2, string stuName3, string stuName4, float matric, float matric1, float matric2, float matric3, float ecat, float ecat1, float ecat2, float ecat3, float inter, float inter1, float inter2, float inter3)
{
    if (agg > agg1 && agg > agg2 && agg > agg3)
    {
        cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
        if (agg1 > agg2 && agg1 > agg3)
        {
            cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            if (agg2 > agg3)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << ecat2 << inter2 << "\t"
                     << "\t" << agg2 << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << ecat3 << "\t" << inter3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg2)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }
        }
        else if (agg2 > agg1 && agg2 > agg3)
        {
            cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            if (agg1 > agg3)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg1)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }
        }
        if (agg3 > agg1 && agg3 > agg2)
        {
            cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            if (agg1 > agg2)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }

            if (agg2 > agg1)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }
        }
    }
    // 2nd
    if (agg1 > agg && agg1 > agg2 && agg1 > agg3)
    {
        cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
        if (agg > agg2 && agg > agg3)
        {
            cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            if (agg2 > agg3)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg2)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }
        }
        if (agg2 > agg && agg2 > agg3)
        {
            cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            if (agg > agg3)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
        if (agg3 > agg && agg3 > agg2)
        {
            cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            if (agg > agg2)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }

            if (agg2 > agg)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
    }
    // 3
    if (agg2 > agg && agg2 > agg1 && agg2 > agg3)
    {
        cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
        if (agg > agg1 && agg > agg3)
        {
            cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            if (agg1 > agg3)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg1)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }
        }
        if (agg1 > agg && agg1 > agg3)
        {
            cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            if (agg > agg3)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            }

            if (agg3 > agg)
            {
                cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
        if (agg3 > agg && agg3 > agg1)
        {
            cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
            if (agg > agg1)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }

            if (agg1 > agg)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
    }
    // 4
    if (agg3 > agg && agg3 > agg2 && agg3 > agg1)
    {
        cout << stuName4 << "\t" << matric3 << "\t" << inter3 << "\t" << ecat3 << "\t" << agg3 << "\n";
        if (agg > agg2 && agg > agg1)
        {
            cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            if (agg2 > agg1)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }

            if (agg1 > agg2)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }
        }
        if (agg1 > agg && agg1 > agg2)
        {
            cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            if (agg > agg2)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            }

            if (agg2 > agg)
            {
                cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
        if (agg2 > agg && agg2 > agg1)
        {
            cout << stuName3 << "\t" << matric2 << "\t" << inter2 << "\t" << ecat2 << "\t" << agg2 << "\n";
            if (agg > agg1)
            {
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
            }

            if (agg1 > agg)
            {
                cout << stuName2 << "\t" << matric1 << "\t" << inter1 << "\t" << ecat1 << "\t" << agg1 << "\n";
                cout << stuName1 << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << agg << "\n";
            }
        }
    }
}