#include <iostream>
using namespace std;

int main() {
    //Given 2 arrays of the same size
    //Determine if one is a rotation of the other
    //for example Example: [1, 2, 3, 4] and [3, 4, 1, 2]
    //So in the above the 1,2 switch to the last part and 3,4 to the first position
    //Clue they are of the same size yeeeeh
    vector<int> y = {1,2,3,4};
    vector<int> x = {3,4,1,2};
    //so what does it mean rotation match? 1 becomes -1 0 becomes -2 
    //wait use the clue
    //x.size() == y.size();
    return 0;
}