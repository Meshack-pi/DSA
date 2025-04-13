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
    //String concatenation
    string StringNumber1 = "This is a string ";
    string StringNumber2 = "This is the second string\n";
    cout << StringNumber1+ StringNumber2;
    //Concatenated
    //Concatenation using the append function since string is an object and has methods
    cout << StringNumber1.append(StringNumber2);
    //Completeted concatenation using append function
    //Strings are concatenated and numbers are added
    //For example
    string number20 = "20";
    string number39 = "39\n";
    string dk = number20 + number39;
    cout << dk;
    //The result for the above concatenation is 2039 and not 59
    //If you try to add a string and a number an error will occur because they are not of the same type
    //Example tested above
    //String length
    string text= "SMARTPEOPLE";
    int stringLength = text.length();
    cout << "The string length is: " << stringLength <<endl ;
    //To get the lenght of the string use function .length()
    //You can use either size or length they both perform the same functionality
    //Accessing values of a string, use the square brackets with the index you want to access eg [2] accesses the third item in the string indexing starts from 0
    cout<< text[9] <<endl;
    //Accessed the letter S on the 10th position at index 9 text[9]
    //You can change the value of a certain position by replacing the value at an index for example
    text[3] = 'C';
    //changed the fourth letter R to C 
    cout<<text <<endl;
    //The C++ String libaray also has an at function that enables one to access values as displayed above
    cout << text.at(3)<<endl; //This will display letter C with is at index 3 and was replaced above
    cout << text.at(text.size()-1); //This will display the last character in the string Displays letter E
    //To display special characters in c++ \' will display ' , \" for double quotes, \\ for backslash
    //To allow user input use the extraction operator >> cin, 
    //When working with strings, we use the getline because cin considers a space as a terminating character which means
    //It can only store a single word
    //Let's use getline irl
    cout << "\n";
    string UserName;
    // cin >> UserName; this will only display the first word
    getline(cin, UserName); // This will display everything that the user inputs
    cout << UserName;

    return 0;
}

/*
Multiline comments that is ignored
By the compiler it is not executed!
*/