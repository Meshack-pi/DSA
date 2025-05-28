#include <iostream>
using namespace std;
int addition(int num[]){
    int sum =0;
    for(int i = 0;i<5;i++){
        sum +=num[i]; 
    }
    return sum;
}

int main() {
    int num[5],count,total;
    cout<<"Enter the five numbers"<<endl;
    for(count =0;count<5;count++){
        cout<<"Enter number: ";
        cin>>num[count];
        cout<<endl;
    }
    total = addition(num);
    cout<<"The sum of the digits in the array is: "<<total<<endl;
    return 0;
}