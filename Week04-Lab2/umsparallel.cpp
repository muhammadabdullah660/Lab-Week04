#include <iostream>
#include <conio.h>
using namespace std;

//----------------------PROTOTYPES----------------------
void header();
void clearscreen();
char adminmenu();
char studentmenu();
string loginmenu();
void adduser(string username, string password, string role);
void addstudent();
void addstudentintoarray(string name, float matric, float fsc, float ecat, float agg, string p1, string p2, string p3);
float sortig(float agg[studentlimit]);

//-------------------END OF PROTOTYPES------------------

//--------------------VARIABLES-------------------------
int const userlimit = 10;
int const studentlimit = 3;
int count = 0, studentcount = 0;
string usernameA[userlimit];
string rolesA[userlimit];
string passwordA[userlimit];
string username, password;
// adminoption1
string studentnameA[studentlimit];
string pref1A[studentlimit];
string pref2A[studentlimit];
string pref3A[studentlimit];
float matricA[studentlimit];
float fscA[studentlimit];
float ecatA[studentlimit];
float aggA[studentlimit];
//-------------------END OF VARIABLES-------------------
main() //------------START OF MAIN---------------------
{
    string who;
    char adminoption = 0, useroption = 0;

    adduser("admin", "123", "admin");
    adduser("ali", "123", "student");
    while (true)
    {
        who = loginmenu();
        if (who == "admin")
        {
            clearscreen();
            while (adminoption != '8')
            {
                adminoption = adminmenu();
                clearscreen();
                if (adminoption == '1')
                { // add student record
                    header();
                    addstudent();
                }
                else if (adminoption == '2')
                {
                    header();
                    cout << "" << endl;
                    cout << "Name"
                         << "\t\t"
                         << "Matric"
                         << "\t\t"
                         << "FSC"
                         << "\t\t"
                         << "ECAT"
                         << "\t\t"
                         << "Agg"
                         << "\t\t"
                         << "1st"
                         << "\t\t"
                         << "2nd"
                         << "\t\t"
                         << "3rd" << endl;
                    for (int i = 0; i < studentlimit; i = i + 1)
                    {
                        cout << studentnameA[i] << "\t\t" << matricA[i] << "\t\t" << fscA[i] << "\t\t" << ecatA[i] << "\t\t" << aggA[i] << "\t\t" << pref1A[i] << "\t\t" << pref2A[i] << "\t\t" << pref3A[i] << endl;
                    }
                }
                else if (adminoption == '3')
                {
                    header();
                    float largest = sortig(aggA[studentlimit]);
                    cout << largest;
                }
                else if (adminoption == '4')
                {
                    header();
                }
                else if (adminoption == '5')
                {
                    header();
                }
                else if (adminoption == '6')
                {
                    header();
                }
                else if (adminoption == '7')
                {
                    header();
                }
                else if (adminoption == '8')
                {
                    header();
                    cout << "Thanks for using University Admission Managment System." << endl;
                }
                else
                {
                    header();
                    cout << "You entered wrong number...plz TRY AGAIN..." << endl;
                }
                clearscreen();
            }
        }
        else if (who == "student")
        {

            while (useroption != '3')
            {
                useroption = studentmenu();
                clearscreen();
                if (useroption == '1')
                {
                    header();
                }
                else if (useroption == '2')
                {
                    header();
                }
                else if (useroption == '3')
                {
                    header();
                    cout << "Thanks for using University Admission Managment System." << endl;
                }
                else
                {
                    header();
                    cout << "You entered wrong number...plz TRY AGAIN..." << endl;
                }
                clearscreen();
            }
        }
        else
        {
            cout << "You entered wrong username and password..." << endl;
        }
    }

} //------------------END OF MAIN---------------------

//--------------------START OF FUNCTIONS--------------
void header()
{
    cout << "***********************************" << endl;
    cout << "**  UNIVERSITY MANAGMENT SYSTEM  **" << endl;
    cout << "***********************************" << endl;
}

void clearscreen()
{

    cout << "Press any number to continue";
    getch();
    system("cls");
}

char adminmenu()
{
    header();
    char option;
    cout << "" << endl;
    cout << "ADMIN MENU >" << endl;
    cout << "-------------------------" << endl;
    cout << "Select one of the following options number...." << endl;
    cout << "1. Add New Student Record : " << endl;
    cout << "2. View All Student : " << endl;
    cout << "3. Print the record in Merit Order : " << endl;
    cout << "4.Generate Merit : " << endl;
    cout << "5.Add Users : " << endl;
    cout << "6.Seat Managment : " << endl;
    cout << "7.Announce Result : " << endl;
    cout << "8. logout" << endl;

    cout << "" << endl;
    cout << "Enter your option...";
    cin >> option;

    return option;
}

char studentmenu()
{
    char option;
    cout << "STUDENT MAIN MENU : " << endl;
    cout << "-------------------------------------" << endl;
    cout << "1.View your Profile : " << endl;
    cout << "2.Check admission status : " << endl;
    cout << "3.Logout : " << endl;
    cout << "" << endl;
    cout << "Enter your option...";
    cin >> option;
    return option;
}

string loginmenu()
{
    header();

    cout << "Enter the username: ";
    cin >> username;
    cout << "Enter the password: ";
    cin >> password;
    for (int i = 0; i < userlimit; i = i + 1)
    {
        if (usernameA[i] == username && passwordA[i] == password)
        {
            return rolesA[i];
        }
    }
    return "wrong";
}

void adduser(string username, string password, string role)
{
    if (count < userlimit)
    {
        usernameA[count] = username;
        passwordA[count] = password;
        rolesA[count] = role;
        count = count + 1;
    }
}

void addstudent()
{
    string name, p1, p2, p3;
    float mmarks = 0, fmarks = 0, ecat = 0, agg = 0;
    cout << "NEW STUDENT RECORD:" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter the student name = " << endl;
    cin >> name;
    cout << "Enter the matric marks = " << endl;
    cin >> mmarks;
    cout << "Enter the FSC Marks = " << endl;
    cin >> fmarks;
    cout << "Enter ECAT marks = " << endl;
    cin >> ecat;

    agg = ((fmarks * 70) / 1100) + ((ecat * 30) / 400);
    cout << "Your aggregrate is = " << agg << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter preferences :" << endl;
    cout << "1.CS           2.SE              3.IT" << endl;
    cout << "First Preferences = ";
    cin >> p1;
    cout << "Second Preference = ";
    cin >> p2;
    cout << "Third Preferences = ";
    cin >> p3;
    addstudentintoarray(name, mmarks, fmarks, ecat, agg, p1, p2, p3);
}

void addstudentintoarray(string name, float matric, float fsc, float ecat, float agg, string p1, string p2, string p3)
{
    if (studentcount < studentlimit)
    {
        studentnameA[studentcount] = name;
        matricA[studentcount] = matric;
        fscA[studentcount] = fsc;
        ecatA[studentcount] = ecat;
        aggA[studentcount] = agg;
        pref1A[studentcount] = p1;
        pref2A[studentcount] = p2;
        pref3A[studentcount] = p3;
        studentcount = studentcount + 1;
    }

    else
    {
        cout << "No more space to add students..." << endl;
    }
}

float sortig(float agg[])
{
    float max = -1;
    int l, small = 0;
    for (int i = small; i < studentlimit; i = i + 1)
    {
        if (agg[i] > max)
        {
            max = agg[i];
            l = i;
            small = small + 1;
        }
    }
    return l;
}

//-------------------END OF FUNCTIONS-----------------