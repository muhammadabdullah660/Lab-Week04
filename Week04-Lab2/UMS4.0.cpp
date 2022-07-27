//________Header Files________________
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
// _____________________Prototypes________________
void mainHeader();
char adminMenu();
void clearScreen();
string loginMenu();
void addStudent();
void viewAllStudents();
void subheader();
char studentMenu();
void addStudentIntoArray(string name, int matric, int fsc, int ecat, string p1, string p2, string p3);
int seatManagementMenu();
void viewSeatsDetails();
void addUser(string name, string pass, string role);
void print_Recd();
float aggregate(float mMarks, float fMarks, float eMarks);
void generate_Mlist();
int studentInfo();
void loadData();
void storeData();
//_____________________Data Structures_______________________
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
int userCount = 0;
int count = 0;
string student_name[MAX_RECORDS];
float student_ecat[MAX_RECORDS];
float student_matric[MAX_RECORDS];
float student_fsc[MAX_RECORDS];
string student_pref1[MAX_RECORDS];
string student_pref2[MAX_RECORDS];
string student_pref3[MAX_RECORDS];
float aggr[MAX_RECORDS];
int entry_count = 0;
string department[] = {"CS", "CE", "EE"};
int seats[] = {0, 0, 0};
int capacity = 0;
bool announce = false;
string username;
//_____________ Main function___________
main()
{
    loadData();

    addUser("admin", "123", "ADMIN"); //__________DEFAULT VALUE SET__________
    string who = " ";
    while (true)
    {
        who = loginMenu();
        cout << who;
        if (who == "ADMIN")
        {
            char option = ' ';
            while (true)
            {
                system("cls");
                option = adminMenu();
                if (option == '1')
                {
                    addStudent();
                }
                else if (option == '2')
                {
                    viewAllStudents();
                }
                else if (option == '3')
                {
                    // -- -- -- -- --Print the record in merit order
                    print_Recd();
                    viewAllStudents();
                }
                else if (option == '4')
                {
                    //------------ Generate merit list
                    // generate_Mlist();
                }
                else if (option == '5')
                {
                    //------------ Add Users
                    cout << "Enter username........ ";
                    string username;
                    cin >> username;
                    cout << "Enter password........ ";
                    string pass;
                    cin >> pass;
                    cout << "Enter role........";
                    string role;
                    cin >> role;
                    addUser(username, pass, role);
                }
                // else if (option == '6')
                // {
                //     while (true)
                //     {
                //         system("cls");
                //         int dpIndex = seatManagementMenu();
                //         if (dpIndex == 1 || dpIndex == 2 || dpIndex == 3)
                //         {
                //             cout << "Enter New Capacity for " << department[dpIndex - 1] << endl;
                //             cin >> capacity;
                //             seats[dpIndex - 1] = capacity;
                //         }
                //         else if (dpIndex == 4)
                //         {
                //             viewSeatsDetails();
                //             clearScreen();
                //         }
                //         else if (dpIndex == 5)
                //         {
                //             break;
                //         }
                //         else
                //         {
                //             cout << "You chose wrong option!" << endl;
                //             clearScreen();
                //         }
                //     } // end of seats management
                // }
                // else if (option == '7')
                // {
                //     cout << "Press 2 to Announce the Result ";
                //     int annouce;
                //     cin >> annouce;
                //     if (annouce == 2)
                //     {
                //         announce = true;
                //     }
                // }
                else if (option == '8')
                {
                    break;
                }
                else
                {
                    cout << "You Chose Wrong option " << endl;
                }
                storeData();
                clearScreen();
            } // end of admin wile loop
        }
        // else if (who == "STUDENT")
        // {
        //     char studentOption = ' ';
        //     while (true)
        //     {
        //         system("cls");
        //         studentOption = studentMenu();
        //         if (studentOption == '1')
        //         {
        //             // View student information
        //             int st_index = studentInfo();
        //             cout << student_name[st_index] << "\t" << student_matric[st_index] << "\t" << student_fsc[st_index] << "\t" << student_ecat[st_index] << "\t" << aggr[st_index] << endl;
        //         }
        //         else if (studentOption == '2')
        //         {
        //             if (announce)
        //             {
        //                 //----pending to implement
        //             }
        //             else
        //             {
        //                 cout << "Result is not announced yet " << endl;
        //             }
        //         }
        //         else if (studentOption == '3')
        //         { //________logout option______
        //             break;
        //         }
        //         else
        //         {
        //             cout << "Wrong selection! Try again";
        //         }
        //         clearScreen();
        //     } // end of student menu while loop
        // }
        // else if (who == "EXIT")
        // {
        //     cout << "choose correct option" << endl;
        // }
        // else
        // {
        //     cout << "You entered wrong option " << endl;
        // }
        // clearScreen();

    } // end of while
} // end of main function
//__________________________ Function definitions_____________
void mainHeader()
{
    cout << "----------------------------------------------" << endl;
    cout << "--- University Admission Management System ---" << endl;
    cout << "----------------------------------------------" << endl;
}
string loginMenu()
{ //________Get user credentials and check whether user is present in
    mainHeader();
    string who = "Wrong Credentials", uName, uPass;
    cout << "Enter Username :- ";
    cin >> uName;
    cout << "Enter Password :- ";
    cin >> uPass;
    for (int i = 0; i < MAX_RECORDS; i++)
    {
        if (uName == usernameA[i] && uPass == passwordsA[i])
        {
            who = rolesA[i];
            break;
        }
    }
    return who;
}
// int seatManagementMenu()
// { //________Discipline with capacity of student. this data should
//     int seats[] = {0, 0, 0};
//     mainHeader();
//     cout << "Seat Management Menu > " << endl;
//     cout << "1- Edit CS Capacity " << endl;
//     cout << "2- Edit CE Capacity " << endl;
//     cout << "3- Edit EE Capacity " << endl;
//     cout << "4- View Seats Details " << endl;
//     cout << "5- Back " << endl;
// }
// void viewSeatsDetails()
// { //______View total seats according to discipline_________
// }
char adminMenu()
{ //_______Administrator level menu goes here__________
    mainHeader();
    cout << "Admin Main Menu > " << endl;
    cout << "1- Add New Student " << endl;
    cout << "2- View All Students" << endl;
    cout << "3- Print the record in merit order " << endl;
    cout << "4- Generate Merit " << endl;
    cout << "5- Add Users " << endl;
    cout << "6- Seat Management " << endl;
    cout << "7- Announce Result " << endl;
    cout << "8- Logout " << endl;
    cout << " Choose Your Option : ";
    char option;
    cin >> option;
    return option;
}
//
void clearScreen()
{ //____clear screen_____
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}
void addStudent()
{ //__________Get student data and their preferences__________addStudentIntoArray();    string name;
    mainHeader();
    string name, p1, p2, p3;
    int fsc, ecat, matric;
    if (userCount < MAX_RECORDS)
    {
        cout << "Enter your Name :- ";
        cin >> name;
        cout << "Enter Obtained Inter marks :- ";
        cin >> fsc;
        cout << "Enter Obtained Matric marks :- ";
        cin >> matric;
        cout << "Enter Obtained ECAT marks :- ";
        cin >> ecat;
        subheader();
        cout << "Enter your 1st Preference :- ";
        cin >> p1;
        cout << "Enter your 2nd Preference :- ";
        cin >> p2;
        cout << "Enter your 3rd Preference :- ";
        cin >> p3;
        addStudentIntoArray(name, matric, fsc, ecat, p1, p2, p3);
    }
    else
    {
        cout << "No more space to enter records";
    }
}
void addStudentIntoArray(string name, int matric, int fsc, int ecat, string p1, string p2, string p3)
{ //______Store student data into array____each time addStudent() function is called. it will store into global array

    student_name[entry_count] = name;
    student_fsc[entry_count] = fsc;
    student_matric[entry_count] = matric;
    student_ecat[entry_count] = ecat;
    student_pref1[entry_count] = p1;
    student_pref2[entry_count] = p2;
    student_pref3[entry_count] = p3;
    aggr[entry_count] = aggregate(student_ecat[entry_count], student_matric[entry_count], student_fsc[entry_count]);
    entry_count++;
}
void viewAllStudents()
{ //_______Retrieve student data and show on screen_______
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
    for (int i = 0; i < entry_count; i++)
    {
        cout << student_name[i] << "\t" << student_matric[i] << "\t" << student_fsc[i] << "\t" << student_ecat[i] << "\t" << aggr[i] << "\t" << student_pref1[i] << "\t" << student_pref2[i] << "\t" << student_pref3[i] << endl;
    }
    clearScreen();
}
void subheader()
{ //________header for preference______
    cout << " Enter the Name for Preferences " << endl;
    cout << "********************************************" << endl;
    cout << "Choose between these disciplines " << endl;
    cout << "1- CS for Compter Science" << endl;
    cout << "2- CE for Compter Engineering" << endl;
    cout << "3- EE for Electrical Engineering" << endl;
    cout << "********************************************" << endl;
}
void addUser(string username, string pass, string role)
{ //______Add user, only admin can add_________
    if (userCount < MAX_RECORDS)
    {
        usernameA[userCount] = username;
        passwordsA[userCount] = pass;
        rolesA[userCount] = role;
        userCount++;
    }
    else
    {
        cout << "No more space to enter users";
    }
}
float aggregate(float ecat, float matric, float inter)
{
    float ecatPerct = ecat / 400.0 * 30;
    float matricPerct = matric / 1100.0 * 25;
    float interPerct = inter / 1100.0 * 45;
    float agg = ecatPerct + matricPerct + interPerct;
    return agg;
}
void print_Recd()
{ //_____________calculate & sort in merit order_________
    float large = aggr[0], temp;
    int index = 0;
    for (int j = 0; j < entry_count; j++)
    {
        for (int i = j; i < entry_count; i++)
        {
            if (aggr[i] > large)
            {
                large = aggr[i];
                index = i;
            }
        }
        temp = aggr[j];
        aggr[j] = aggr[index];
        aggr[index] = temp;
    }
    for (int i = 0; i < entry_count; i++)
    {
        cout << student_name[i] << "\t" << student_matric[i] << "\t" << student_fsc[i] << "\t" << student_ecat[i] << "\t" << aggr[i] << "\t" << student_pref1[i] << "\t" << student_pref2[i] << "\t" << student_pref3[i] << endl;
    }
    clearScreen();
}
// void generate_Mlist()
// { //_________________Generate merit according to discipline a student get admit____________
// }
// int studentInfo()
// { //____________Student as user info__________
// }
void loadData()
{
    fstream stuFile;
    stuFile.open("student.txt", ios::in);
    while (!stuFile.eof())
    {
        stuFile >> student_name[entry_count];
        stuFile >> student_matric[entry_count];
        stuFile >> student_fsc[entry_count];
        stuFile >> student_ecat[entry_count];
        stuFile >> student_pref1[entry_count];
        stuFile >> student_pref2[entry_count];
        stuFile >> student_pref3[entry_count];
        entry_count++;
    }
    stuFile.close();
}
void storeData()
{
    fstream stuFile;
    stuFile.open("student.txt", ios::out);
    for (int i = 0; i < entry_count; i++)
    {
        stuFile << student_name[i];
        stuFile << " ";
        stuFile << student_matric[i];
        stuFile << " ";
        stuFile << student_fsc[i];
        stuFile << " ";
        stuFile << student_ecat[i];
        stuFile << " ";
        stuFile << student_pref1[i];
        stuFile << " ";
        stuFile << student_pref2[i];
        stuFile << " ";
        stuFile << student_pref3[i];
        stuFile << endl;
    }

    stuFile.close();
}