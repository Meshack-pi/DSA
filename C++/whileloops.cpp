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
   for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 3; j++) {
      cout << i * j << "\n";
    }
  }
  //WHAT IS THE OUTPUT OF THE ABOVE NESTED LOOP
  //REMEMBER THE INNER LOOP IS SEEN AS A Block of code so it must be executed fully each time the outer loop is true;
  //So the answer to the above is as follows:
  /*
  for the outer loop first value of i is 1 then inner loop is 1 
  1 *1 is 1, then inner loop runs again with j as 2, so 1 * 2 is 2
  then j is 3 so 1 *3 is 3
  then the code block inside is terminated since 4 is not less than on equal to three so we start again with the outer loop
  so for i = 2 so for j is 1 1*2 is 2
  then loops again when j is 2 so 2 * 2 is 4
  then for j is 3 so 3*2 is 6
  so the final outputs is 1 2 3 2 4 6
  //Most important thing to remember is that the inner loop is executed untill it is false for the outer loop to start once again
  */
 //C++ For each loop which is a range based loop
 //must have an array of values 
cout<<"C++ for each loop code\n";
 int myNumbers[5] = {4,5,8,2,9};
 for (int zed : myNumbers){
    cout<<zed<<endl;
 }
 cout<<"C++ Break and continue key words";
for (int i = 0; i<20;i++){
    if (i==3){
        break;
    }
    cout<<i<<endl;
}
//So the break keyword will make the code stop when the condition inside the block is true
//in this case when the value of i is equal to 3 then the code block will terminate
cout<<"continue statement in cpp\n";
//the continue keywork will break one iteration in the loop if a specified condition is achieved
//then continues with the next iteration in the loop
for(int i = 0; i <=20; i++){
    if(i==8){
        continue;
    }
    cout<<i<<endl;
}
//The above statement has skipped 8 and gone to the next 

return 0;
}