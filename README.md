# CodeAlpha_CGPA_Calculator
A C++ CGPA Calculator developed as part of the CodeAlpha C++ Programming Internship. This project calculates semester GPA using course grades and credit hours, displays individual course details, and provides total grade points and credit hours.
CodeAlpha CGPA Calculator

📌 Project Overview

The CGPA Calculator is a console-based application developed in C++ as part of the CodeAlpha C++ Programming Internship.

The program calculates a student's semester GPA using course grade points and credit hours. It also displays individual course information, total credit hours, total grade points, and the final GPA.

🎯 Objectives

- Practice fundamental C++ programming concepts.
- Work with variables, arrays, loops, and conditional statements.
- Understand user input and input validation.
- Calculate weighted grade points.
- Apply mathematical formulas in a practical application.
- Display formatted output using C++.

✨ Features

- Accepts the number of courses.
- Takes course names, grade points, and credit hours as input.
- Validates grade points and credit hours.
- Calculates weighted grade points for each course.
- Calculates total credit hours.
- Calculates total grade points.
- Computes semester GPA.
- Displays individual course details.
- Presents the final results in a readable format.

🛠️ Technologies Used

- C++
- Standard C++ Library
- iostream
- iomanip
- string

📐 GPA Calculation Formula

The GPA is calculated using the following formula:

GPA = Total Grade Points / Total Credit Hours

Weighted grade points for each course are calculated as:

Weighted Grade Points = Grade Points × Credit Hours

Example

Course| Grade Points| Credit Hours| Weighted Grade Points
C++ Programming| 3.7| 3| 11.1
Mathematics| 3.3| 4| 13.2
English| 4.0| 2| 8.0
Total| | 9| 32.3

Final GPA = 32.3 / 9 = 3.59

📂 Project Structure

CodeAlpha_CGPA_Calculator/
│
├── main.cpp
├── README.md
└── .gitignore

⚙️ How to Run

Prerequisites

Install a C++ compiler such as GCC or MinGW.

Step 1: Clone the Repository

git clone https://github.com/PixorixArt/CodeAlpha_CGPA_Calculator.git

Step 2: Open the Project Folder

cd CodeAlpha_CGPA_Calculator

Step 3: Compile the Program

g++ main.cpp -o cgpa

Step 4: Run the Program

On Windows:

cgpa.exe

On Linux:

./cgpa

📸 Screenshots

Add screenshots of the program's execution to demonstrate its input process and final results.

You can create a "screenshots" folder and upload your screenshots there.

📚 Learning Outcomes

Through this project, I practiced:

- C++ input and output operations.
- Variables and data types.
- Arrays and loops.
- Conditional statements and input validation.
- Arithmetic operations and weighted averages.
- Basic problem-solving and debugging.

👩‍💻 Author

Pixorix Art

Software Engineering Student | Aspiring Software Developer

🏢 Internship

C++ Programming Internship — CodeAlpha

⚠️ Note

This is an educational project created to practice C++ programming concepts.

The current version calculates semester GPA from the courses entered during one session. The displayed overall CGPA is the same as the semester GPA because previous-semester records are not included.

---

If you find this project useful for learning, feel free to explore the source code.
