#include <iostream>
#include <string>
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
    //C++ taking inputs from the user
    // string MyName;
    // cout << "What is your name: ";
    // cin >> MyName;
    // cout << "Your name is: " << MyName <<endl;
    // cout << "Code executed!\n";
    //Addition assignment operator
    //The addition assignment operator is used to add a value to a variable
    //Example
    int value1 = 3;
    cout << "The value of value1 is: " << value1 << "\n";
    //Subtraction assignment operator
    int value2 = 5;
    value2 -= 2;
    cout << "The value of value2 is: " << value2 << "\n";
    int test;
    test = value2 & value1;
    cout << "The value of test is: " << test << "\n";   
    //Bitwise AND operateor returns 1 only if the LSB least significant bit rightmost bit is 1
    //Bitwise OR operator returns 1 if any of the bits is 1
    //Same with XOR, NOR, XNOR, XAND, XNAND

    //Comparison operators
    //To check if values are Equal to, not equal to, greater than, less than, greater than or equal to, less than or equal to
    //example
    //Check if value1 is equal to value2
    bool equalityCheck;
    equalityCheck = value1 == value2;
    cout << "The value of test is: " << equalityCheck << "\n";
    //Test on the logical operators
    //Logical AND
    int IntegerX = 5;
    int IntegerY = 10;
    bool LogicalAND;
    LogicalAND = (IntegerX == 5) && (IntegerY == 1);
    //Ths will return true (0)  if both conditions are true
    cout << "The value of Logical AND is: " << LogicalAND << "\n";
    string aString = "This is a string Variable";
    cout << aString;


    return 0;
}

/*
Multiline comments that is ignored
By the compiler it is not executed!
*/