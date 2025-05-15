#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Find all elements that are greater than both their 
    //intermediate neighbers print number of peaks

    //For example: in [1, 3, 2, 4, 1], peaks are 3 and 4.
    vector<int> y = {4,90,72,89,78,91,73,2};
    int peaks = 0;
    for(int i =1;i<y.size()-1;i++){
        if(y[i]>y[i-1] && y[i]>y[i+1]){
            cout<<y[i]<<endl;
            peaks +=1;
    }
    }
        cout<<"The number of peaks is: "<<peaks<<endl;
    return 0;
}