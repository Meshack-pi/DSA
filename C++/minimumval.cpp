#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Given array of integers
    //if smallest number is even and less than 10 return "Low even"
    //If smallest is odd and more than 50 return "High odd"
    //otherwise return standard 
    vector<int> n = {3,67,8,21,5,2};
    int s = n.size();
    //find the smallest int
    int small = n[0];
    for(int i =1;i<s;i++){
        if(n[i]<small){
            small = n[i];
        }
    }
    cout<<small<<endl;
    //Found smallest number
    //now conditions
    if(small%2==0 && small<10){
        cout<<"Low even\n";
    }else if(small%2!=0 && small>50){
        cout<<"High odd\n";
    }else{
        cout<<"Standard\n";
    }
    return 0;
}