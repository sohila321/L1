#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};
struct Student
{
    int id;
    string name;
    Date birth_day;
    bool gender;
    double gpa;
};
void inputallstudent(Student *studentarray, int numofstudent)
{

    studentarray[numofstudent];
    for (int i = 0; i < numofstudent; i++)
    {

        cout << " Student " << i + 1 << endl
             << " id :  ";
        cin >> studentarray[i].id;

        cout << " name  :";
        cin >> studentarray[i].name;

        cout << " birth day :  ";
        cin >> studentarray[i].birth_day.day;
        cout << " birth month : ";
        cin >> studentarray[i].birth_day.month;
        cout << " birth year : ";
        cin >> studentarray[i].birth_day.year;

        cout << " gender "
             << "\t Note Enter 1 if student female and 0 if student is male : ";
        cin >> studentarray[i].gender;

        cout << " gpa : ";
        cin >> studentarray[i].gpa;

        cout << endl;
    }
}
void outputallstudent(Student *studentarray, int numofstudents)
{
    for (int i = 0; i < numofstudents; i++)
    {
        cout << " \n Student " << i + 1 << "\n ";
        cout << studentarray[i].id << " " << studentarray[i].name << " " << studentarray[i].birth_day.day << "/" << studentarray[i].birth_day.month << "/" << studentarray[i].birth_day.year;
        if (studentarray[i].gender == 1)
            cout << " "
                 << " Female"
                 << " " << studentarray[i].gpa;
        else if (studentarray[i].gender == 0)
            cout << " "
                 << " Male "
                 << " " << studentarray[i].gpa;
        else
        {
            cout << "Invalid gender";
        }
    }
}
void sortstudentsbygpa(Student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (s[i].gpa > s[j].gpa)
            {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << " " << s[i].name << " ";
        cout << s[i].birth_day.day << "/" << s[i].birth_day.month << "/" << s[i].birth_day.year << " ";
        if (s[i].gender)
            cout << "Male " << s[i].gpa << endl;
        else
            cout << "Female " << s[i].gpa << endl;
    }
}
bool isolder(Student *s1, Student *s2)
{
    if (s1->birth_day.year < s2->birth_day.year)
    {
        return true;
    }
    else if (s1->birth_day.year > s2->birth_day.year)
    {
        return false;
    }
    else
    {
        if (s1->birth_day.month < s2->birth_day.month)
        {
            return true;
        }
        else if (s1->birth_day.month > s2->birth_day.month)
        {
            return false;
        }
        else
        {
            if (s1->birth_day.day < s2->birth_day.day)
            {
                return true;
            }
            else
                return false;
        }
    }
}
void sortstudentsbybirthdar(Student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (isolder(&s[i], &s[j]))
                continue;
            else
            {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << " " << s[i].name << " ";
        cout << s[i].birth_day.day << "/" << s[i].birth_day.month << "/" << s[i].birth_day.year << " ";
        if (s[i].gender)
            cout << "Male " << s[i].gpa << endl;
        else
            cout << "Female " << s[i].gpa << endl;
    }
}
Student *searchStudentsById(Student *s, int n, int ID)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].id == ID)
        {
            return &s[i];
        }
    
    }
    return nullptr;
}

int main()
{
    int numofstudents, choise = 0, id;
    cout << " \n Enter Number of student you will acesse \n ";
    cin >> numofstudents;
    Student *studentsArray = new Student[numofstudents];
    inputallstudent(studentsArray, numofstudents);
    do
    {

        cout << "Choose an option:" << endl;
        cout << "1- Output all the student’s data." << endl;
        cout << "2- Sort students by birth date." << endl;
        cout << "3- Sort students by GPA." << endl;
        cout << "4- Search students by ID." << endl;
        cout << "5- Exit the program." << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            outputallstudent(studentsArray, numofstudents);
            break;
        case 2: // sort
            sortstudentsbybirthdar(studentsArray, numofstudents);
            break;
        case 3:
            sortstudentsbygpa(studentsArray, numofstudents);
            break;
        case 4:
        {
            cout << "Enter id \n";
            cin >> id;
            Student *founded = searchStudentsById(studentsArray, numofstudents, id);
            if (founded != nullptr)
            {
                cout << founded->name;
            }
        }
        break;
        default:
            break;
        }

    } while (choise != 5);
    delete[] studentsArray;
    return 0;
}
