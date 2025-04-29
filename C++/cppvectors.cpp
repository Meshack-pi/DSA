#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string car[] = {"Volvo", "BMW", "Ford"};
    cout<<car[1]<<endl;

        //getting the size of an array
    //To get the size of an array we can use the sizeof() operator
    //The sizeof() operator returns the totoal number of bytes used by the array in a memery
    //Each string takes up 24 bytes at most in this case there are three strings so 24*3 becomes 72;
    cout<<sizeof(car)<<endl;
    //This will show 72 Since the sizeof operator will show the size of a variable 
    //So in this case the size of a 
    //Looping through the size of an array
    for(int i = 0; i<sizeof(car)/sizeof(car[0]); i++){
        cout<<car[i]<<endl;
    }


    //Multi dimensional arrays
    //This is an array of arrays
    //First define the variable type
    
    return 0;
}