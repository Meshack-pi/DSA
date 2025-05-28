#include <iostream>
#include <cmath>
using namespace std;
//Function that returns the value of the first parameter raised to the power of its 2nd parameter
//second parameter is an integer but may also be zero or a negative

int PowerRaise(int a, int b){
    int power_result;
    power_result = pow(a,b);
    return power_result;
}
//Function that draws a line of n alterisks, n being passed as a paramer to the function
//write a drive program program that calls and test the function which uses the ufction to output an m power x n block of alterisk m and n
//are entered by the user
void AlteriskPrinter(int m, int n){
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*Extend the function of the previous exercise so that it prints a line of n alterisks starting from 
column n starting in column n, 2 parameters m and n if values of the m and n are such that the line of alterisks would
extend beyond column 80 then function should return false and print nothing
otherwise it should output true and print the line of alterisks amend your drive program so that it uses
the function return value to terminate execution with an error message if m and n are such that there would be a lien overflow
think carefully about the test data
*/
int main() {
    cout<<"The result for powers is: "<<PowerRaise(4,5)<<endl;
    AlteriskPrinter(4,7);
    return 0;
}