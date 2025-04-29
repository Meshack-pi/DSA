#include <iostream>
using namespace std;
int main(){
    //In this code I will be exploring the concept of arrays in cpp
    //Arrays are used to store multiple values in a single variable instead of declaring separate values in it
    //first define the variable type,specify the name of the array, followed by the square brackets which indicate the number of elements to store
    //example
    string cars[4] = {"volvo", "mercedes", "bmw", "honda"};
    //you can create an array with any data type but the values of the elements must match the declared data type eg if array is a string then all elements must be a string and so forth
    //accessing the values of an array
    cout<<cars[3]<<endl;
    //this will output honda since it is in the 4th position
    //changing the value of an array
    //reassigning it to a certain value

    cars[2]= "not bmw anymore";
    cout<<cars[2]<<endl;
    //this will change the value of the cars[2] which was bmw now the value is "not bmw anymore"
    //looping through an array we use the for looop since we already know the number of times the loop is supposed to run
    cout<<"Loooping through an array using the for loop\n";
    for (int i = 0; i<4; i++){
        cout<<cars[i]<<endl;
    }
    //lets loop now using the for each looop in cpp
    //this style was introduced in 2011 cpp version 11
    // for (string i : cars){
    //     cout<<i<<endl;
    // }

    //NB in CPP it is not a must to define the size of an array you can define the array with a number of values and the compiler will know the number of elements it contains
    //for example
    int numbers[] = {2,23,39,39,29,18, 5,7}; //8 elements
    //it is also possible to declare an array with certain number of elements and give it values later on example below
    int myStrangeNumbers[3];
    myStrangeNumbers[0] = 3;
    myStrangeNumbers[1] = 8;
    myStrangeNumbers[2] = 4;
    //This will not work for the variable that has not been given a distinct number of values eg the array int numbers[]; can't be used to do the same unless you add the number of elements
    //Multi dimensional arrays example
    string letters[3][3] = {
        {"Meshack", "Daniel", "Joseph"},
        {"John","Anita", "Staicy"},
        {"Maria", "Basil", "Jeremy"}
    };
    cout<<letters[0][2]<<endl;
    letters[1][1] = "Baby";
    cout<<letters[1][1];
    cout<<"Lopping through each value in the multi dimensional array\n";
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cout<<letters[i][j]<<endl;
        }
    }



    return 0;
}