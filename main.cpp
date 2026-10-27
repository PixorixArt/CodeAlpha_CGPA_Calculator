#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int courses;

    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "====================================\n";
    cout << "       CGPA CALCULATOR\n";
    cout << "====================================\n";

    // Ask for the number of courses
    cout << "Enter the number of courses: ";
    cin >> courses;

    // Validate the number of courses
    while (courses <= 0)
    {
        cout << "Invalid input! Enter a positive number: ";
        cin >> courses;
    }

    // Arrays to store course information
    string courseNames[100];
    double grades[100];
    double creditHours[100];

    // Input details for each course
    for (int i = 0; i < courses; i++)
    {
        cout << "\nEnter details for Course " << i + 1 << ":\n";

        cout << "Course name: ";
        cin >> ws;
        getline(cin, courseNames[i]);

        cout << "Grade points (0.0 - 4.0): ";
        cin >> grades[i];

        // Validate grade points
        while (grades[i] < 0 || grades[i] > 4)
        {
            cout << "Invalid grade! Enter between 0.0 and 4.0: ";
            cin >> grades[i];
        }

        cout << "Credit hours: ";
        cin >> creditHours[i];

        // Validate credit hours
        while (creditHours[i] <= 0)
        {
            cout << "Invalid credit hours! Enter a positive value: ";
            cin >> creditHours[i];
        }

        // Calculate total credits and grade points
        totalCredits += creditHours[i];
        totalGradePoints += grades[i] * creditHours[i];
    }

    // Calculate GPA
    double gpa = totalGradePoints / totalCredits;

    // Display course details
    cout << "\n====================================\n";
    cout << "        COURSE DETAILS\n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < courses; i++)
    {
        cout << "\nCourse: " << courseNames[i] << endl;
        cout << "Grade Points: " << grades[i] << endl;
        cout << "Credit Hours: " << creditHours[i] << endl;
        cout << "Weighted Grade Points: "
             << grades[i] * creditHours[i] << endl;
    }

    // Display final results
    cout << "\n====================================\n";
    cout << "        FINAL RESULTS\n";
    cout << "====================================\n";

    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << gpa << endl;
    cout << "Overall CGPA: " << gpa << endl;

    cout << "\nThank you for using CGPA Calculator!\n";

    return 0;
}
