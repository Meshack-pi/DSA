#include <iostream>
using namespace std;

bool BooleanCheck(float n, float y){
    //returns true if n >y
    //returns false otherwise
    bool x;
    if(n>y){
        x = true;
    }else{
        x=false;
    }
    return x;
}

int main() {
    cout<<BooleanCheck(4,5)<<endl;
    return 0;
}