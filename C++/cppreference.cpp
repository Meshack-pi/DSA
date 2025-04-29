#include <iostream>
using namespace std;
int main(){
    //A reference variable isa reference to an existing variable created with & operator
    string food = "Pilau"; //food variable
    string &meal = food; //Reference to food
    //Now we can use either variable food or reference name meal to refer to the food variable
    cout<<food<<endl; //will output Pilau
    cout<<meal<<endl;//will output pilau

    //CPP Memory address
    //The memory address is where the a value is stored
    //If you declare a variable food, then it is stored in a memory address 
    //To access the memory address of a variable use the & operator
    //For example
    cout<<&food<<endl;
    cout<<&meal<<endl;
    //this will show that the variable meal and food have the same memory address 
    //This is because the variable meal refers to the variable food and not a new memory address
    
    //CPP POINTERS
    //To get the memory address of a variable we use the & operator
    //A pointer is a variable that stores the memory address as its value
    //A pointer variable points to a datatype of same type and is created with the * operator
    //the address of the variable with its assigned pointer
    string myvar = "This is a variable";
    string* mypointer = &myvar;
    //the pointer variable above with the name mypointer stores the addres of the myvar
    //outputs
    cout<<myvar<<endl; //value of my var
    cout<<&myvar<<endl; //this will output the memory address of myvar
    cout<<mypointer<<endl; //This will output the memory address of myvar with the pointer

    //MUST NOTE THAT the type of the pointer has to match the type of variable if string then pointer must be string etc
    //Alterisk sighn use and give the pointer a name
    /*
    Three ways declare a pointer
    string* mypointer;
    string *mypointer;
    string * mypointer;
    all of these work
        */
    //Dereference
    //we use the pointer variable to get the memory address of a variable
    //Used together with the & reference operater
    //However you can use the pointer to get the value of the variable by using the * dereference operator
    //example
    cout<<"Showing dereference"<<endl;
    cout<<*mypointer<<endl;
    return 0;
}