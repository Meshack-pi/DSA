#include <iostream>
using namespace std;

int main() {
    //Using a do while loop output the even numbers from 12 to 28
    //Starting point 12 end at 28
    //Pattern is that all numbers are even numbers from 12 to 28 so add 2 every time untill 28
    int n = 12;
    do{
        cout<<n<<endl;
        n +=2;
    }while(n<=28);
    return 0;
}