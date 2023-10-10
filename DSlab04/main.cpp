#include <iostream>

using namespace std;
struct Student{
    string name;
    int id, semester_complete, credits_completed;
    float CGPA;
};
int main()
{
    Student s[10];
    s[1].id = 1234;
    s[1].CGPA = 3.98;
    s[1].semester_complete = 9;
    s[1].credits_completed = 76;




    s[2].id = 1654;
    s[2].CGPA = 3.45;
    s[2].semester_complete = 2;
    s[2].credits_completed = 14;






    s[3].id = 1267;
    s[3].CGPA = 3.78;
    s[3].semester_complete = 11;
    s[3].credits_completed = 125;






    s[4].id = 1257;
    s[4].CGPA = 3.11;
    s[4].semester_complete = 10;
    s[4].credits_completed = 120;




    s[5].id = 1456;
    s[5].CGPA = 3.15;
    s[5].semester_complete = 5;
    s[5].credits_completed = 54;






    s[6].id = 1290;
    s[6].CGPA = 3.05;
    s[6].semester_complete = 3;
    s[6].credits_completed = 36;






    s[7].id = 1222;
    s[7].CGPA = 3.85;
    s[7].semester_complete = 8;
    s[7].credits_completed = 96;






    s[8].id = 1576;
    s[8].CGPA = 3.75;
    s[8].semester_complete = 10;
    s[8].credits_completed = 120;






    s[9].id = 1123;
    s[9].CGPA = 3.95;
    s[9].semester_complete = 8;
    s[9].credits_completed = 96;






    s[10].id = 1545;
    s[10].CGPA = 3.95;
    s[10].semester_complete = 9;
    s[10].credits_completed = 106;

    for (int i = 0; i < 10; i++)
        {
            if (s[i].CGPA >= 3.75)
            {
            cout << "Student ID with CGPA 3.75 or Above: " << s[i].id << endl;
            }
        }
    cout << "Scholarship Student : " << endl;
    for (int i = 0; i < 10; i++)
        {
            if (s[i].credits_completed > 50)
            {
                cout << "Student ID who completed 50 credit or more: " << s[i].id << endl;
            }
        }
        cout << "Students who completed 2 semesters and 28 credits  :" << endl;
    for (int i = 0; i < 10; i++)
        {
            if (s[i].semester_complete >= 2 && s[i].credits_completed >= 28)
                {
                    cout << "Student ID: " << s[i].id << endl;
                }
        }



    return 0;
}
