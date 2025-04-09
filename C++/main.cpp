#include <iostream>
using namespace std;
int main(){
    cout << "Hello world"<< endl;
    //This outputs a string/text and starts a new line
    //The <<endl statement ensures any other output is started in a new line  
    cout << 3 <<endl;
    //Outputs a number 3
    cout << 3 + 4 <<endl;
    //Outputs the result of 3 + 4
    cout << "This is will add new line" << "\n";
    cout << "Blank line \n \n";
    cout << "Testing"<<endl;
    //Variables in C++
    int Number = 5;
    char character = 'a';
    //char is a single character
    //int is an integer
    float aFloat = 5.3;
    int a = 2, t = 2, x = 8;
    cout << a + t + x <<endl;
    //declaring variables with same values
    int num1, num3, num2;
    num1 = num3 = num2 = 40;
    cout << num1;

    //Declaring meaningful datatypes
    //Data types can have real world names other than the usual empty identifiers like num1 mynum etc
    //For example data below is used to store the info of a college student
    int StudentAge = 20;
    int StudentID = 1000; //Do not forget to have a semicolon at the end of each statement
    string StudentCourse = "Computer Science";
    float StudentMarks = 87.83;
    char StudentGrade = 'A'; //Do not forget to have a semicolon at the end of the statement
    string StudentName = "Meshack";
    cout << "Student name " << StudentName <<"\n";
    cout << "Student grade " << StudentGrade << "\n";
    cout << "Student marks " << StudentMarks << "\n";
    cout << "Student course " << StudentCourse << "\n";
    cout << "Student ID " << StudentID << "\n";
    cout << "Student age " << StudentAge << "\n";


    return 0;
}

/*
Multiline comments that is ignored
By the compiler it is not executed!
*/