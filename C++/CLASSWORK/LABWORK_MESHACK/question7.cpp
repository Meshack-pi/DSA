#include <iostream>
using namespace std;

int main() {
    //rpeatedly collects positive integers from the user and stopping when the user enters a negative number or zero
    int number, positive_product;
    cout<<"Enter a number: ";
    cin>>number;
    while(number>0){
        positive_product *=number;
        cout<<"Enter a number (0 or negative to stop): ";
        cin>>number;
    }
    cout << "Product of all your positive numbers is: " << positive_product << endl;
    return 0;
}