#include <iostream>
#include <cmath>

using namespace std;
int main(){
    //In this section I will be exploring mathematics in C++
    //Finding the largest number between two numbers using the max function
    int X, Y;
    Y =4;
    X = 8;
    cout << max(X, Y) <<endl;
    //It will display 8 as the largest 
    //Same applies to min
    cout << min(X, Y)<<endl;
    //For other functions like square root, round logarithm etc You must include the cmath library
    cout << sqrt(Y) <<endl;
    //displays 2 as the squareroot of 4
    cout << round(2.87)<<endl;//Rounds off the number to the nearest whole number
    cout << log(3.8) <<endl;
    //Boolean expressions outputs values of either true or false as 1 or 0 respectively
    cout << (X>Y); //These expressions must be in the paranthesis otherwise syntax error will occur
    


    return 0;
}