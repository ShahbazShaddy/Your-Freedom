#include <iostream>
using namespace std;
string output(float percentage);
float eng;
float math;
float chem;
float sci;
float bio;
float percentage;
string name;
main()
{

    cout << "Name: ";
    cin >> name;
    cout << "Marks in English: ";
    cin >> eng;
    cout << "Marks in Maths: ";
    cin >> math;
    cout << "Marks in Chemistry: ";
    cin >> chem;
    cout << "Marks in Social Science: ";
    cin >> sci;
    cout << "Marks in Biology: ";
    cin >> bio;
    string result = output(percentage);
    cout << "Grade is " << result << endl;
    float totalMarks = eng + math + chem + sci + bio;
    percentage = totalMarks / 500 * 100;
    cout << "Percentage is " << percentage << endl;
    cout << "Student name is " << name;
}

string output(float percentage)
{
    float totalMarks = eng + math + chem + sci + bio;
    percentage = totalMarks / 500 * 100;

    string grade;
    if (percentage < 40)
    {
        grade = "F";
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        grade = "D";
    }
    else if (percentage >= 51 && percentage <= 60)
    {
        grade = "C";
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        grade = "B";
    }
    else if (percentage >= 71 && percentage <= 80)
    {
        grade = "B+";
    }
    else if (percentage >= 81 && percentage <= 90)
    {
        grade = "A";
    }
    else if (percentage >= 91 && percentage <= 100)
    {
        grade = "A+";
    }
    return grade;
}
