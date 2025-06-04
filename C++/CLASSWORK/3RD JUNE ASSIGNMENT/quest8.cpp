#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float A[5], B[5];
    cout<<"Enter the values of float A and B\n";
    for(int i=0;i<5;i++){
        cout<<"Enter value for float A at index: "<<i<<endl;
        cin>>A[i];
        cout<<"Enter value of float B at index: "<<i<<endl;
        cin>>B[i];
    }
    int sumA =0;
    int sumB =0;
    for(int i=0;i<5;i++){
        sumA+=A[i];
        sumB +=B[i];
    }
    cout<<"The sum of array B is: "<<sumB<<endl;
    cout<<"The sum of array A is: "<<sumA<<endl;

    
    int innerSum = 0;
    for(int i=0;i<5;i++){
        innerSum +=A[i]*B[i];
    }
    cout<<"Ther value of the inner product is: "<<innerSum<<endl;
    
    float diffsum = 0;
    for(int a=0;a<5;a++){
        diffsum +=pow((A[a]-B[a]),2);
    }
    float est = diffsum/5;
    cout<<"The estimate of different values is: "<<est<<endl;
    return 0;
}