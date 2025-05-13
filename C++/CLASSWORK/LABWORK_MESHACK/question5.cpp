#include <iostream>
using namespace std;

int main() {
    //write a program to use the do while loop and for loop to find the sum of integers 73 to 415 both inclusive
    //display the resulting sum

    //start with the for loop
    int for_loop_sum =0, do_while_loop_sum=0; //different variables for the different loop
    for(int z = 73;z<=415;z+=1){
        for_loop_sum +=z;
    }
    int start_point = 73;
    do{
        do_while_loop_sum +=start_point;
        start_point+=1;
    }while(start_point<=415);
    cout<<"Sum of for loop is: "<<for_loop_sum<<endl;
    cout<<"Sum of do while loop: "<<do_while_loop_sum<<endl;
    return 0;
}