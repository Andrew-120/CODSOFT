#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    string* studentNames = new string[numStudents];
    double* studentGrades = new double[numStudents];

    for (int i = 0; i < numStudents; i++) 
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter the grade for " << studentNames[i] << ": ";
        cin >> studentGrades[i];
    }

    if (numStudents == 0) 
    {
        cout << "No students entered." << endl;
        return 1;
    }

    double sum = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (int i = 0; i < numStudents; i++) 
    {
        sum += studentGrades[i];
        if (studentGrades[i] > highestGrade) 
        {
            highestGrade = studentGrades[i];
        }
        if (studentGrades[i] < lowestGrade) 
        {
            lowestGrade = studentGrades[i];
        }
    }

    double averageGrade = sum / numStudents;

    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    delete[] studentNames;
    delete[] studentGrades;

    return 0;
}