#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Given array of integers  and a threshold T, remove all elements less than T
    //Print the new array
    vector<int> y={38,819,37,81,28,93};
    int T = 35;
    int size = y.size();
    for(int i = size-1;i>=0;i--){
        if(y[i]<T){
            y.erase(y.begin()+i);
        }
    }
    
    return 0;
}