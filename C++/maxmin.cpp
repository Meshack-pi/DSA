#include <iostream>
using namespace std;

int main() {
    //given arrays of integers
    //calculate difference between max and min
    //if difference is greater than 100 print wide range else narrow range
    //find max and min first then decision
    vector<int> x = {37,87,2990,93,57,48};
    int s = x.size();
    int max = x[0], min = x[0];
    for(int i=1;i<s;i++){
        if(x[i]>max){
            max = x[i];
        }
        if(x[i]<min){
            min = x[i];
        }
    }
    int d = max -min;
    cout<<d<<endl;
    if(d>100){
        cout<<"Wide range\n";
    }else{
        cout<<"Narrow range\n";
    }
    return 0;
}