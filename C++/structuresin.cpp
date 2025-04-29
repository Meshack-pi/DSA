#include <iostream>
using namespace std;
int main(){
    //Structures in CPP
    /*
    CPP Structures are also called structs 
    So this is a way to group several related variables in one place
    Ech variable in the structure is known as the member of the structure
    unlike an array a structure can contain many data types, int bool, string etc etc
    */
   struct{
    int number;
    string name;
    bool true_value;
    float my_float;
    } myStucture;
    myStucture.true_value = true;
    cout<<myStucture.true_value<<endl;

    //CPP Enumuration
    //CPP Enum
    //So an Enum is a special type that represents a group of constant unchangeable values
    //To create an enum use the enum keyword followed by the name of the enum, then separate the enum
    //items with a comma
    enum Level{
        LOW = 39,
        MEDIUM,
        HIGH=3
    };
    //The last item doesn't have a comma
    //not a must to be in caps but a good way of writing constant variables
    //enum is short for enumurations which means specifically listed
    //To access the enum you must create a variable of it
    //Inside the main() method specify the enum keyowrd
    enum Level mysamplevar;
    mysamplevar = HIGH;
    cout<<mysamplevar<<endl;
    //You can also give them values eg

    //You use ENUMS When you want to give names to constants
    //Use enums when you have values that you don't know aren't going to change like months day etc
    return 0;
}