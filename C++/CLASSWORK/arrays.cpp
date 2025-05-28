#include <iostream>
using namespace std;


int main() {
    int num[4];
    //declared an array named num with 4 elements and type int
    //Variables can only be accessed at the positions 0 1 2 3 only accessing the integer at 4 will result in an errr
    //Zero based indexing
    //first element is access at zero
    //initializing an array
    int mynum[5]={3,9,8,4,6}; //an array with variables predefined
    float sample[]={}; //To store unlimited  number of items in an array
    //Zero sized array is initalized using an empty size of zeor
    //This is similar to float sample[0];
    sample[0] = 8.4;
    int sample2[0]; //this already creates a zero based array
    cout<<sample[0];
//This has limited utility and not recommeded in real world scenarios
    num[0] = 7;
    cout<<num[3];
    return 0;
}