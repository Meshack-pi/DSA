//Algorithm to find the largest number in an integer array
#include <iostream>
using namespace std;
int main(){
    int my_array[] = {2,83,20,20,28,18}; //This is my unsorted array of values /integers arranged in an order that is random
    //The number of items in my array
    int number_of_items  = (sizeof(my_array)/sizeof(my_array[0]));
    //Iterate and print each value in the array
    //We have an inner loop Because the last digit is compared to the second last digit
    for (int i = 0; i<number_of_items;i++){
        for (int j =0; j<number_of_items-1; j++){
            if(my_array[j]>my_array[j+1]){
                int temp = my_array[j];
                my_array[j] = my_array[j+1];
                my_array[j+1] = temp;
            }

        }
    }
    for(int k=0; k<number_of_items;k++){
        cout<<my_array[k]<<", ";
    }
    cout<<endl;
    cout<<"Finding the largest number in an array"<<endl;
    int largest_number = my_array[0];
    for (int i = 0; i<number_of_items;i++){
        if(my_array[i]>largest_number){
            largest_number = my_array[i];
        }
    }
    //Print out the largest number
    cout<<"The largest number is: "<<largest_number<<endl;

    return 0;
}