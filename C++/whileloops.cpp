#include <iostream>
using namespace std;
int main(){
    //In this session I will be exploring while loops ins C++
    //Loops execute a block of code as long as the specified condition is reached
    //While looops runs through a block of code as long as the specified condition is true
    /*
    while (condition){
    // This code block will be execute as long as condition is true

    }
    */
   // repeat a block of code as long as a condition is true
    int i = 0;
    while (i<5){
        // cout << i<<"\n";
        i++;
    }

    //Do while loop is the variant of the while loop
    //This will execute the code block once before checking if the condition is true then it will
    //Repeat the block as long as the condition is true
    int z = 0;
    do{
        cout<<z<<"\n";
        z++;

    }while(z<5);

    //Today I am learning about For loops
    //For loop is used when you already know how many times you want the program to run
    //the while loop is used when you don't know how many times it is supposed to run, it's a matter of condition is true so the code block just runs 
    /*
    for(statement1, statement2, statement3){
    //statement 1 is executed 1 time
    //statement 2 defines the condition for executing the code block
    //statement 3 is executed every time when the code block has been executed (repeats basically)
    //Statement three is an update given the variable has already changed.
    }
    */
   for(int u = 0; u<8; u++){
    cout<<u<<endl;
   }
   //What did the above code do?
   cout<<"Even numbers printed here\n";
   for (int trials = 0; trials<=10; trials+=2){
    cout<<trials<<endl;
   }

   //Nested loops is when we have several looops inside each other
   //A loop inside another loop
   
    return 0;
}