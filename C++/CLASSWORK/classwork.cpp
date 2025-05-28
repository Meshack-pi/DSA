/*
uSING A US
*/
#include <iostream>
using namespace std;

float meanarray(float mynum[],int n){
    float total = 0.0, average;
    for(int i=0;i<n;i++){
        total +=mynum[i];
    }
    average = total/n;
    return average;
}
int main() {
    int n,count;
    float average;
    cout<<"What is the number of elements: ";
    cin>>n;
    float mynum[n];
    cout<<"Enter the number of items in the array"<<endl;
    for(count =0;count<n;count++){
        cout<<"Enter a number: ";
        cin>>mynum[count];
    }
    cout<<endl;
    average = (float)meanarray(mynum,n); //Typecast to float, output in float form for accuracy
    cout<<"The mean of your array is: "<<average<<endl;
    return 0;
}