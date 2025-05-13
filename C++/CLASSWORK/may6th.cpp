#include <iostream>
using namespace std;

int main() {
    //the cube of odd numbers from 50 to 100, starting to 100
    /*
    > this will require a while loop
    >the while loop will start from 50 and add till 100 
    >must add a condition to check if a number is odd that is %modulus is not zero
    >the problem is that there are several odd numbers in this question
    */
   int n = 100,cube;
   while(n>=50){
    if(n%2!=0){
        cout<<n<<endl;
        cout<<n*n*n<<endl;
    }
    n--;
   }
   while(n>=50){
    
   }
    return 0;
}