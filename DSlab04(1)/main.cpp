#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int id;
    int semesters;
    int credits;
    double cgpa;
};

int main() {
    Student students[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Enter Student " << i + 1 << " ID: ";
        cin >> students[i].id;
        cout << "Enter Number of Semesters Completed: ";
        cin >> students[i].semesters;
        cout << "Enter Number of Credits Completed: ";
        cin >> students[i].credits;
        cout << "Enter CGPA: ";
        cin >> students[i].cgpa;
        cout << endl;
    }
    cout << "Scholarship Students :" << endl;
    for (int i = 0; i < 10; ++i) {
        if (students[i].cgpa >= 3.75) {
            cout << "Student ID: " << students[i].id << endl;
        }
    }
    cout << "Students with more than 50 credits completed:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (students[i].credits > 50) {
            cout << "Student ID: " << students[i].id << endl;
        }
    }

    cout << "Students with at least 2 semesters and 28 credits completed:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (students[i].semesters >= 2 && students[i].credits >= 28) {
            cout << "Student ID: " << students[i].id << endl;
        }
    }

    return 0;
}
