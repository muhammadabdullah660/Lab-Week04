#include <iostream>
using namespace std;
// All Functions Prototypes
void header();
char mainMenu();
void viewStu(string stuName1, string pref1, string pref2, string pref3, float ecat, float matric, float inter, float total);
float aggregate(float ecat, float matric, float inter);
// Main Function
main()
{ // Variable Declaration
    char option;
    int one;
    string stuName1 = "", stuName2 = "", pref1 = "", pref2 = "", pref3 = "", pref4 = "", pref5 = "", pref6 = "", stuName3 = "", stuName4 = "", pref7 = "", pref8 = "", pref9 = "", pref10 = "", pref11 = "", pref12 = "";
    float ecat = 0.0, matric = 0.0, inter = 0.0, ecat1 = 0.0, matric1 = 0.0, inter1 = 0.0, ecat2 = 0.0, matric2 = 0.0, inter2 = 0.0, ecat3 = 0.0, matric3 = 0.0, inter3 = 0.0;
    float ecatPerct = 0.0, matricPerct = 0.0, interPerct = 0.0, total = 0.0, ecatPerct1 = 0.0, matricPerct1 = 0.0, interPerct1 = 0.0, total1 = 0.0, ecatPerct2 = 0.0, matricPerct2 = 0.0, interPerct2 = 0.0, total2 = 0.0, ecatPerct3 = 0.0, matricPerct3 = 0.0, interPerct3 = 0.0, total3 = 0.0;
    float agg = 0.0;
    header();
    option = mainMenu();
    if (option < '5')
    {
        // SHOW NO STUDENTS
        if (option == '2')
        {
            header();
            viewStu(stuName1, pref1, pref2, pref3, ecat, matric, inter, agg);
            cout << "Enter any key to continue...";
            cin >> one;
            header();
            option = mainMenu();
        }
        // ADD FIRST STUDENT
        if (option == '1')
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
            cout << "Enter any key to continue...";
            cin >> one;
            agg = aggregate(ecat, matric, inter);
            header();
            option = mainMenu();
        }
        // SHOW ONE STUDENTS
        if (option == '2')
        {
            header();
            viewStu(stuName1, pref1, pref2, pref3, ecat, matric, inter, agg);
            cout << "Enter any key to continue...";
            cin >> one;
            header();
            option = mainMenu();
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
char mainMenu()
{
    char option;
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
}
float aggregate(float ecat, float matric, float inter)
{
    float ecatPerct = ecat / 400.0 * 30;
    float matricPerct = matric / 1100.0 * 25;
    float interPerct = inter / 1100.0 * 45;
    float agg = ecatPerct + matricPerct + interPerct;
    return agg;
}