#include <iostream>
using namespace std;
int sum (int k){
    if(k>0){
        return k+ sum(k-1);
    }else{
        return 0;
    }
}

int main(){ 
    int result = sum(10);
    cout<<result<<endl;
    return 0;
}