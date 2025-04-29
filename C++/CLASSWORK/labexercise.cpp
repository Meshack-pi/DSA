#include <iostream>
// #include <orion>
// using namespace stars;
using namespace std;
int main(){
    //Question 1
    /*
    In what situation would a programmer delcare variables to store numbers with decimal places
    (fraction part) using double type as opposed to float data type in C++ illustrate with an example in code
    */
   //Answer: A double data type has more precision compare to using a float data type
   //This will be very important when dealing with high precision calculations like money in a bank
   //Most accurate explanation
   /*
   A float data type has a precision of 7 decimal places while a double has a precision of 15 decimal places hence
   double offers a higher precision and a wider range compared to float data type. hence, a double is suitable in 
   operations requiring high precision/accuracy
   */
   //Example calculating interest earned in a day for loan in a bank
   double interest_rate, loan_amount, interest_amount;
   loan_amount = 399.2983889;
   interest_rate = 0.0678;
   interest_amount = interest_rate * loan_amount;
   cout<<"You have to pay an interest amount of Ksh: "<< interest_amount<<endl;
   //This is the first part of using a double with high precision calculation
   /*Question 2 Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the 
   sum, product, different and quotient/division of the two numbers
   */
  int num1, num2, sum, difference;
  float division, product;
  cout<<"Insert the first number here: ";
  cin>>num1;
  cout<<"Insert the second number here: ";
  cin>>num2;
  product = num1*num2;
  sum = num1 + num2;
  difference = num1 - num2;
  division = num1/num2;
  cout<< "The product of the two numbers is: "<<product<<endl;
  cout<<"The sum of the two numbers is: "<<sum<<endl;
  cout<<"The difference of the two numbers is: "<<difference<<endl;
  cout<<"The division of the two numbers is: "<<division<<endl; 
  //Question 3 
  /*
  Write a C++ program to diplay the pattern below
********
 ********
********
 ********
********
So the pattern has 8 stars and it should run 8 times and has a space on the first part of line after line 1
so this is a loop

  */
 //Use a for loop since code has to run 8 times
 for(int i = 0; i<8; i++){
    if((i%2)!=0){
        cout<<" ********\n";
    }else{
        cout<<"********\n";
    }
 }
 //end program

 //Question 4 
 /*Write a C++ program that will calculate the area and circumefence of a circle
 Value of PI is 3.14 you must not explicityly store the perimeter and the area in any declared memory location however
 the radius will be inserted by the user input
 output the value of the permiter and area using integer values

 */
    int radius;
    float pi = 3.14;
    cout<<"Insert the radius of the circle: ";
    cin>>radius;
    cout<<"The cicumerence of the circle is : " << 2*pi*radius<<endl;
    cout<<"The area of the circle is: "<< pi*radius*radius<<endl;
   cout<<"==CODE EXECUTION SUCCESSFULL==\n";
   //Question 5 including a CPP header file called orion from an external library that has some functionality and objects in a namespace called stars

    return 0;
}